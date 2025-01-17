/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:45:34 by akretov           #+#    #+#             */
/*   Updated: 2025/01/17 17:08:26 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie() : _name("default"){
    std::cout << _name << " was created" << std::endl;
}

Zombie::~Zombie( void ) {
    std::cout << _name << " was destroyed" << std::endl;
}

void    Zombie::announce( void ) {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName ( std::string name ) {
    _name = name;
}