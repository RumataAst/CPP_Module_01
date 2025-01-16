/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:39:36 by akretov           #+#    #+#             */
/*   Updated: 2025/01/16 20:35:40 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <fstream>
#include <iostream>
#include <stdexcept>
#include <cstddef>


#define FILENAME    1
#define s1          2
#define s2          3

// replace.cpp
void    find_and_replace(FILE *filename,char *argv[]);

#endif