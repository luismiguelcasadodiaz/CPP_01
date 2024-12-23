/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:44:35 by luicasad          #+#    #+#             */
/*   Updated: 2024/12/23 16:57:45 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.class.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	this->_name ="Anonymous";
	this->_showMe();
}

Zombie::Zombie(std::string one_name)
{
	this->_name = one_name;
	this->_showMe();
}

Zombie::~Zombie(void)
{
	std::cout << this->getName() << " destroyed" << std::endl;
}

void	Zombie::setName(std::string one_name)
{
	std::cout << this->_name << " renamed to " << one_name << std::endl;
	this->_name = one_name;
}

std::string	Zombie::getName() const
{
	return (this->_name);
}

void	Zombie::_showMe(void) const
{
	std::cout << this->getName() << " created " << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
