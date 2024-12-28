/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:37:27 by luicasad          #+#    #+#             */
/*   Updated: 2024/12/23 11:46:13 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.class.hpp"
#include <string>

void	randomChump(std::string name);
Zombie *newZombie (std::string name);

int	main(void)
{
	Zombie *zombie_one = new Zombie("Zombie ONE");

	randomChump("Zombie TWO");
	delete zombie_one;
	return (0);
}
