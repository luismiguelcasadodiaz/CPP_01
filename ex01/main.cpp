/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:37:27 by luicasad          #+#    #+#             */
/*   Updated: 2024/12/23 17:11:50 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.class.hpp"
#include <string>

Zombie *zombieHorde (int N, std::string name);

int	main(void)
{
	const int	N = -5;
	Zombie *zombies = zombieHorde(N, "Zombie member");
	Zombie *one_zombie;

	if (zombies != NULL)
	{
		one_zombie = zombies;
		while (one_zombie < zombies + N)
		{
			one_zombie->announce();
			one_zombie++;
		}
		delete [] zombies;
	}
	return (0);
}
