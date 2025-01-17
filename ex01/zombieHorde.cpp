/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:32:38 by akretov           #+#    #+#             */
/*   Updated: 2025/01/17 17:08:36 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>
#include <string> 


std::string intToString( int value ) {
    std::stringstream ss;
    ss << value;    
    return ss.str();
}

Zombie* zombieHorde( int N, std::string name ) {
    if (N <= 0)
        return NULL; 
    
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        std::string uniqueName = name + intToString(i + 1);
        horde[i].setName(uniqueName);
        horde[i].announce();
    }
    return horde;
}