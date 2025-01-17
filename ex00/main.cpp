/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:47:59 by akretov           #+#    #+#             */
/*   Updated: 2025/01/17 17:03:46 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ( void ) {
    std::cout << "Wait a second, there is a random chump?!" << std::endl;
    randomChump("Zack");
    std::cout << "We were waiting for zombie BOB!" << std::endl; 
    Zombie *Bob = NULL;
    Bob = newZombie("Bob");
    delete Bob;
    return 0;
}