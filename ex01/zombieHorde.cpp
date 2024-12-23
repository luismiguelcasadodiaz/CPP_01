/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:44:32 by luicasad          #+#    #+#             */
/*   Updated: 2024/12/23 16:39:22 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie *zombieHorde (int N, std::string name)
{
	Zombie *the_zombie = new Zombie[N];
	int		idx = 0;

	while (idx < N)
		the_zombie[idx++].setName(name);
	return &(the_zombie[0]);
}
