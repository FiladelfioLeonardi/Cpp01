/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:11:55 by fefo              #+#    #+#             */
/*   Updated: 2025/08/11 17:34:56 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon* weapon; // Pointer: can be nullptr if no weapon
        
    public:
        HumanB(const std::string& name);
        void setWeapon(Weapon& weapon);
        const   std::string getHumanB() const;
        void attack() const; // Attack function
    
};

#endif