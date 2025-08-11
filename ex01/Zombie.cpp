/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:12:07 by fileonar          #+#    #+#             */
/*   Updated: 2025/08/11 16:16:10 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("")
{
	std::cout << "Space allocated for initializing zombies." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " is destroyed." << std::endl;
}

void Zombie::announce() const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name, int i)
{
    this->name = name;
	std::cout << "initialized zombie " << i << " with name: " << this->name << std::endl;
}