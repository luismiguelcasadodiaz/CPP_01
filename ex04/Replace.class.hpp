/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:50:06 by luicasad          #+#    #+#             */
/*   Updated: 2025/01/02 12:01:15 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _REPLACE_CLASS_H
# define _REPLACE_CLASS_H
# include <iostream>
# include <string>

class Replace
{
	private:
		std::ifstream	*_file;
		std::string		_orig;
		std::string		_repl;

	public:
		Replace(std::ifstream *filedes, std::string original, std::string replacement);
		~Replace();
		void showfile(void);
		int	num_originals(void);
};
#endif
