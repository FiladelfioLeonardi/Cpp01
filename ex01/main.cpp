/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:19:36 by fileonar          #+#    #+#             */
/*   Updated: 2025/08/11 16:16:51 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	// Create a horde of 5 zombies
	int N = 5;
	Zombie* horde = ZombieHorde(N, "HordeZombie");

	// Make each zombie announce itself
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	// Clean up the horde
	delete[] horde;
	return (0);
}
