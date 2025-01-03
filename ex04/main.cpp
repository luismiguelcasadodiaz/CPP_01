/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:49:42 by luicasad          #+#    #+#             */
/*   Updated: 2025/01/03 11:28:33 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <fstream>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include "Replace.class.hpp"

bool has_write_permission(const std::string& folder)
{
	struct stat sb;
	if (stat(folder.c_str(), &sb) == 0)
		return ((sb.st_mode & S_IWUSR) != 0);
	else
		return (false);
}

//splits filepath returning  path(*p) and filename (*f)
void split_filepath(const std::string fp, std::string *p, std::string *f)
{
	std::string::size_type     last_slash = 1 + fp.find_last_of("/");

	if (last_slash == 1)
	{
    	*p = "";
		*f = fp;
	}
	else
	{
    	*p = fp.substr(0, last_slash);
		*f = fp.substr(last_slash);
	}
//	std::cout << *p << "<>" << *f << std::endl;
}

bool writable_folder(const std::string filepath)
{
    std::string		path;
	std::string&	pathRef = path;
	std::string		filename;
	split_filepath(filepath, &path, &filename);
	if (path.compare("") == 0)
		path = ".";
	if	(has_write_permission(pathRef))
		return (true);
	std::cout << "Folder " << path << " no write permission" << std::endl;
	return (false);
}

bool empty(const std::string& orig)
{
    if (orig.empty())
    {
        std::cout << "Original string can not be empty" << std::endl;
        return (true);
    }
	return (false);
}

bool	readable(const std::string filepath, std::ifstream *i, std::ofstream *o)
{	
	i->open(filepath.c_str(), std::ifstream::in);
	if (i->is_open())
	{
		std::string newfile = filepath + "replace";
		struct stat sb;
		if (stat(newfile.c_str(), &sb) == 0)
		{
			std::cout << "File "<< newfile << " already exists." << std::endl;
			i->close();
			return (false);
		}
		o->open(newfile.c_str(), std::ofstream::out);
		return (true);
	}
	else
	{
		std::cout << strerror(errno) << std::endl;
		return (false);
	}
}

int treat_args(char **argv)
{
    std::string file = argv[1];
    std::string orig = argv[2];
    std::string repl = argv[3];
	std::ifstream ifs;	
	std::ofstream ofs;	

	if (empty(orig) || !writable_folder(file) || !readable(file, &ifs, &ofs))
		return (-1);
	Replace  obj = Replace(&ifs, &ofs, orig, repl);
	obj.showfile();
	ifs.close();
	ofs.close();
    return (0);
}

int    usage(void)
{
    std::cout << "Incorrect program call" << std::endl;
    std::cout << "Usage ./main <filename> <orig str> <repl str>" << std::endl;
    return (0);
}

int	main(int argc, char **argv)
{
    if (argc != 4)
        return (usage());
    else
        return (treat_args(argv));
}
