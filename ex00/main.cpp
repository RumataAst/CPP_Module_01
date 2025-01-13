/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:47:59 by akretov           #+#    #+#             */
/*   Updated: 2025/01/13 16:29:56 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void){
    std::cout << "Wait a second there is a randomchump?!" << std::endl;
    randomChump("Zack");
    std::cout << "We were waiting for zombie BOB!" << std::endl; 
    Zombie *Bob = NULL;
    Bob = newZombie("Bob");
    delete Bob;
    return 0;
}