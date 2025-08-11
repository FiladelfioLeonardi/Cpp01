/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:34:47 by fileonar          #+#    #+#             */
/*   Updated: 2025/08/11 16:15:55 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* ZombieHorde(int N, std::string name)
{
	Zombie* horde = new Zombie[N];
	
	for (int i = 0; i < N; ++i)
		horde[i].setName(name + "_" + std::to_string(i + 1), i + 1);
	return horde;
}