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

void	itoa (int N, std::string *resultado)
{
	char		num;

	if (N == 0)
		resultado->insert(0, 1, '0');
	else if (N > 0)
	{ 
		if (N  > 9)
		{
			itoa(N / 10, resultado);
			num = static_cast<char>(48 + N % 10);
		}
		num = static_cast<char>(48 + N % 10);
		resultado->append(1,  num);
	}
		
}

Zombie *zombieHorde (int N, std::string name)
{
	int		idx = 0;
	std::string	num_txt;
       
	itoa(125, &num_txt);

	std::cout << "tengo que crear " << num_txt << std::endl;
	if (N > 0)
	{
		Zombie *the_zombie = new Zombie[N];
		while (idx < N)
		{
			num_txt.clear();
			itoa(idx, &num_txt);
			//std::string myname = name.append(num_txt.size(), num_txt);
			the_zombie[idx++].setName(name + num_txt);
		}
		return &(the_zombie[0]);
	}
	else
		return (NULL);
}
