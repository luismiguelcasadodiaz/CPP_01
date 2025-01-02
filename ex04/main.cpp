/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:49:42 by luicasad          #+#    #+#             */
/*   Updated: 2025/01/02 11:50:27 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <fstream>
#include <errno.h>
#include <string.h>
#include "Replace.class.hpp"

int treat_args(char **argv)
{
    std::string file = argv[1];
    std::string orig = argv[2];
    std::string repl = argv[3];

    if (orig.empty())
    {
        std::cout << "Original string can not be empty" << std::endl;
        return (-1);
    }
    int     last_slash = file.find_last_of("/")
    std::string path = 
    std::ifstream ifs;

    ifs.open(file.c_str(), std::ifstream::in);
    if (ifs.is_open())
    {
        Replace  obj = Replace(&ifs, orig, repl);
        obj.showfile();
        obj.showfile();
        ifs.close();
        return (0);
    }
    else
    {
        std::cout << strerror(errno) << std::endl;
        return (-1);
    }
    return (0);
}

int    usage(void)
{
    std::cout << "Incorrect program call" << std::endl;
    std::cout << "Usage ./main <filename> <original string> <replacement string>" << std::endl;
    return (0);
}

int	main(int argc, char **argv)
{
    if (argc != 4)
        return (usage());
    else
        return (treat_args(argv));
}
