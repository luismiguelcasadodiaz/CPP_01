/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:50:06 by luicasad          #+#    #+#             */
/*   Updated: 2025/01/03 13:28:13 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _REPLACE_CLASS_H
# define _REPLACE_CLASS_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstring>

class Replace
{
	private:
		std::ifstream			*_ifil;
		std::ofstream			*_ofil;
		std::string				_orig;
		std::string				_repl;
		std::string::size_type	_orig_size;
		std::string::size_type	_repl_size;

		void _adjust_escape_chars(std::string *s);

	public:
		Replace(std::ifstream *ifiledes, std::ofstream *ofiledes,
				std::string original, std::string replacement);
		~Replace();
		void showfile(void);
		void copyfile(void);
		int	num_originals(void);
};
#endif
