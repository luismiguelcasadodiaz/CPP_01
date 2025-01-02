/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:50:23 by luicasad          #+#    #+#             */
/*   Updated: 2025/01/02 12:11:48 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string>
#include <fstream>
#include "Replace.class.hpp"

Replace::Replace(std::ifstream *filedes, std::string original, std::string replacement):
	_file(filedes),
	_orig(original),
	_repl(replacement)
{

}

Replace::~Replace(void)
{

}

void Replace::showfile(void)
{
	char c = static_cast<char>(this->_file->get());
 	while (this->_file->good()) 
	{
    	std::cout << c;
    	c = static_cast<char>(this->_file->get());
  	}
	//this->_file->seekg (0, this->_file->beg);
	this->_file->seekg (0);
}

int	Replace::num_originals(void)
{
	return (0);
}