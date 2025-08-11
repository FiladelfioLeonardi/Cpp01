/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:19:36 by fileonar          #+#    #+#             */
/*   Updated: 2025/08/11 15:42:30 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << "--------Zombie created in the Heap--------" << std::endl;
	Zombie* zombie1 = newZombie("Sara");
	zombie1->announce();
	delete zombie1;
	Zombie* zombie2 = newZombie("Lili");
	zombie2->announce();
	delete zombie2;
	std::cout << "--------Zombie created in the Stack--------" << std::endl;
	randomChump("Richi");
	randomChump("bob");
	return (0);
}