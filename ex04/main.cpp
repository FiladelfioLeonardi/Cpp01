/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 19:03:28 by fefo              #+#    #+#             */
/*   Updated: 2025/08/13 13:55:17 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <word to replace> <new word>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
     if (s1.empty()) {
        std::cerr << "Error: s1 cannot be empty.\n";
        return 1;
    }

    std::ifstream infile(filename);
    if (!infile) {
        std::cerr << "Error: Cannot open file '" << filename << "' for reading.\n";
        return 1;
    }

    std::string content((std::istreambuf_iterator<char>(infile)),
                         std::istreambuf_iterator<char>());
    infile.close();

    std::string result;
    size_t pos = 0;
    for (; true; ) {
        size_t found = content.find(s1, pos);
        if (found == std::string::npos) {
            result += content.substr(pos);
            break;
        }
        result += content.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }

    std::ofstream outfile(filename + ".replace");
    if (!outfile) {
        std::cerr << "Error: Cannot open file '" << filename << ".replace' for writing.\n";
        return 1;
    }
    outfile << result;
    outfile.close();

    return 0;
}
