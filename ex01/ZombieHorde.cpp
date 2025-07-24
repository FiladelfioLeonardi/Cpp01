/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:34:47 by fileonar          #+#    #+#             */
/*   Updated: 2025/07/24 16:46:36 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* ZombieHorde(int N, std::string name)
{
	Zombie* horde = new Zombie[N];
	
	for (int i = 0; i < N; ++i)
		horde[i].setName(name + "_" + std::to_string(i + 1));
	return horde;
}