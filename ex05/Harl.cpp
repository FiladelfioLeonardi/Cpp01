/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complaints.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 00:53:07 by fefo              #+#    #+#             */
/*   Updated: 2025/08/12 01:03:40 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Harl constructor called" << std::endl;
}

Harl::~Harl()
{
    std::cout << "Harl destructor called" << std::endl;
}

void Harl::complain(const std::string level)
{
    typedef void (Harl::*HarlFunc)();
    const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    HarlFunc funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; ++i) {
        if (level == levels[i]) {
            (this->*funcs[i])();
            return;
        }
    }
    std::cout << "Unknown level: " << level << std::endl;
}

void Harl::debug()
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "Guys is everything okay?" << std::endl << std::endl;
}

void Harl::info()
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "No for real guys, i m getting worried" << std::endl << std::endl;
}

void Harl::warning()
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "CHILL OUT CHILL OUT CHILL OUT" << std::endl << std::endl;
}

void Harl::error()
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "I M GOING CRAAAAAAZZZZZZYYYYYYY" << std::endl << std::endl;
}