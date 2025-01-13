/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:39:36 by akretov           #+#    #+#             */
/*   Updated: 2025/01/13 16:22:47 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstddef>

class Zombie {
private:
    std::string _name;

public:
    Zombie(std::string name);
    ~Zombie();
    void announce( void );
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif