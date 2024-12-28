/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:44:32 by luicasad          #+#    #+#             */
/*   Updated: 2024/12/23 11:43:02 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

//Allocate dynamically cause the function returns a Zombie
Zombie *newZombie (std::string name)
{
	Zombie *the_zombie = new Zombie(name);

	return (the_zombie);
}
