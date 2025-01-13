/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:32:38 by akretov           #+#    #+#             */
/*   Updated: 2025/01/13 17:15:24 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>  // For std::stringstream
#include <string>   // For std::string

std::string intToString(int value) {
    std::stringstream ss;
    ss << value;           // Insert the integer into the stringstream
    return ss.str();       // Return the string representation of the integer
}

Zombie* zombieHorde(int N, std::string name) {
    Zombie** horde = new Zombie*[N];
    
    for (int i = 0; i < N; i++) {
        std::string uniqueName = name + intToString(i + 1);
        horde[i] = new Zombie(uniqueName);
        horde[i]->announce();
    }

    return (horde[0]);
}