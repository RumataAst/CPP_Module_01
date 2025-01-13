/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:47:59 by akretov           #+#    #+#             */
/*   Updated: 2025/01/13 17:18:14 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void){

    Zombie      *horde = NULL;
    std::string name = "Zombie";
    int         N = 5;

    horde = zombieHorde(N, name);

    // for (int i = 0; i < N; i++)
    //     delete &horde[i];
    // delete[] horde;
    
    return 0;
}