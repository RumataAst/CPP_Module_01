/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:39:36 by akretov           #+#    #+#             */
/*   Updated: 2025/01/15 20:13:06 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>

#include <cstdio> 
#include <fstream>
#include <string>
#include <cctype>

enum InputCheckResult {
    VALID_INPUT = 0,
    INCORRECT_NUMBER_ARGV = 1,
    FILE_DOESNT_EXIST = 2,
    ONLY_SPACES = 3,
    EMPTY_INPUT = 4,
};

#endif