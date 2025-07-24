/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:19:36 by fileonar          #+#    #+#             */
/*   Updated: 2025/07/24 16:42:21 by fileonar         ###   ########.fr       */
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
	return 0;
}
// Zombie* zombie1 = newZombie("Heap_Zombie1");
// zombie1->announce();
// delete zombie1;
// randomChump("Stack_Zombie2");