/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:03:29 by luicasad          #+#    #+#             */
/*   Updated: 2024/12/23 11:48:38 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

// Memory statically. The zombie only exists inside the function's scope
void	randomChump(std::string name)
{
	Zombie zombie_two(name);
	Zombie zombie_three;

	zombie_two.announce();
	zombie_three.announce();
	zombie_three.setName("Zombie THREE");
	zombie_three.announce();
}
