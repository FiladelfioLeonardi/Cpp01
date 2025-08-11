/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:53:41 by fefo              #+#    #+#             */
/*   Updated: 2025/08/11 16:54:14 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
private:
    std::string name;
    Weapon& weapon; // Reference: must always refer to a valid Weapon

public:
    HumanA(const std::string& name, Weapon& weapon); // Constructor
    void attack() const; // Attack function
};

#endif