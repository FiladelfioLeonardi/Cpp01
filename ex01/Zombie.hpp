/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:06:50 by fileonar          #+#    #+#             */
/*   Updated: 2025/08/11 16:15:39 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void announce() const;
		void setName(std::string name, int i);
	private:
		std::string name;
};

Zombie* ZombieHorde(int N, std::string name);

#endif