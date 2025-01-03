/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:50:23 by luicasad          #+#    #+#             */
/*   Updated: 2025/01/03 21:03:36 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Replace.class.hpp"

Replace::Replace(std::ifstream *ifiledes, std::ofstream *ofiledes, 
			std::string original, std::string replacement):
	_ifil(ifiledes),
	_ofil(ofiledes),
	_orig(original),
	_repl(replacement)
{
	this->_adjust_escape_chars(&(this->_orig));
	this->_orig_size =this->_orig.size();
	this->_adjust_escape_chars(&this->_repl);
	this->_repl_size =this->_repl.size();
}

Replace::~Replace(void)
{

}

void	Replace::_adjust_escape_chars(std::string *s)
{
	std::string empty = "";
	std::string *output = &empty;

	for (std::string::size_type i = 0; i < s->length(); ++i)
	{
		char c = s->at(i);
    	if (c  == '\\' && i + 1 < s->length())
		{
			char c1 = s->at(i + 1);
			switch (c1)
		  	{
				case 'a':
				  output->push_back('\a');
				  ++i; // Skip the 'a' character
				  break;
				case 'b':
				  output->push_back('\b');
				  ++i; // Skip the 'b' character
				  break;
				case 'f':
				  output->push_back('\f');
				  ++i; // Skip the 'f' character
				  break;
				case 'n':
				  output->push_back('\n');
				  ++i; // Skip the 'n' character
				  break;
				 case 'r':
				  output->push_back('\r');
				  ++i; // Skip the 'r' character
				  break;
				case 't':
				  output->push_back('\t');
				  ++i; // Skip the 't' character
				  break;
				case 'v':
				  output->push_back('\v');
				  ++i; // Skip the 'v' character
				  break;
				 case '"':
				  output->push_back('\"');
				  ++i; // Skip the '"' character
				  break;
				 case '\'':
				  output->push_back('\'');
				  ++i; // Skip the ''' character
				  break;
				case '\\':
				  output->push_back('\\');
				  ++i; // Skip the '\' character
				  break;
				// Add more escape sequences as needed (e.g., '\r', '\"', etc.)
				default:
				  output->push_back(s->at(i));
		  	}
    	} else {
      		output->push_back(s->at(i));
    	}
  	}
	*s = *output;
}
/*
void Replace::showfile(void)
{
	std::string buffer ="";
	char c = static_cast<char>(this->_ifil->get());
	while (this->_ifil->good())
	{
		while (this->_ifil->good() && c != this->_orig[0]) 
		{
			this->_ofil->put(c);
			c = static_cast<char>(this->_ifil->get());
		}
		std::string::size_type idx = 0;
		while ( (c == this->_orig[idx]) &&
				(idx < this->_orig_size) &&
				(this->_ifil->good()) )
		{
			buffer.push_back(c);
			c = static_cast<char>(this->_ifil->get());
			idx++;
		}
		if (idx == this->_orig_size)
		{
			std::string::size_type idx2 = 0;
			while (idx2 < this->_repl_size)
				this->_ofil->put(this->_repl[idx2++]);
		}
		else
		{
			std::string::size_type idx2 = 0;
			while (idx2 <= idx)
				this->_ofil->put(buffer[idx2++]);
		}
		buffer.clear();
	}

}
*/
void Replace::showfile(void)
{
	std::string buffer ="";
	char c = static_cast<char>(this->_ifil->get());
	while (this->_ifil->good())
	{
		while (this->_ifil->good() && c != this->_orig[0]) 
		{
			this->_ofil->put(c);
			std::cout << c;
			c = static_cast<char>(this->_ifil->get());
		}
		std::string::size_type idx = 0;
		while ( (c == this->_orig[idx]) &&
				(idx < this->_orig_size) &&
				(this->_ifil->good()) )
		{
			buffer.push_back(c);
			c = static_cast<char>(this->_ifil->get());
			idx++;
		}
		if (idx == this->_orig_size)
		{
			this->_ofil->write(this->_repl.c_str(), strlen(this->_repl.c_str()));
			std::cout << this->_repl;
		}
		else if (idx > 0)
		{
			--idx;
			while (idx)
				this->_ifil->putback(buffer.at(idx--));
			this->_ofil->put(buffer.at(0));
			std::cout << buffer.at(0);
		}
		buffer.clear();
	}

}
int	Replace::num_originals(void)
{
	return (0);
}
void Replace::copyfile(void)
{
	char c = static_cast<char>(this->_ifil->get());
 	while (this->_ifil->good())
	{
    	this->_ofil->put(c);
    	c = static_cast<char>(this->_ifil->get());
  	}
}
