/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:38:37 by luicasad          #+#    #+#             */
/*   Updated: 2024/12/23 11:43:02 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_CLASS_H
# define _ZOMBIE_CLASS_H
# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string one_name);
		~Zombie(void);
		void announce(void) const;
		void setName(std::string one_name);
		std::string getName() const;
	private:
		std::string _name;
		void _showMe(void) const;

};

#endif
