/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:24:51 by fefo              #+#    #+#             */
/*   Updated: 2025/08/11 16:30:40 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    //basically the same as brain just with another name.
    std::string &stringREF = brain;

    // Print addresses
    std::cout << "Memory address of brain:          " << &brain << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    // Print values
    std::cout << "Value of brain:                   " << brain << std::endl;
    std::cout << "Value pointed to by stringPTR:    " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF:    " << stringREF << std::endl;
    
    return (0);
}