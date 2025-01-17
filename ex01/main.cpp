/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:47:59 by akretov           #+#    #+#             */
/*   Updated: 2025/01/17 17:04:20 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
    std::string name = "Zombie";
    int N = 5;

    // Create the horde
    Zombie* horde = zombieHorde(N, name);

    // Free the horde
    delete[] horde;

    return 0;
}