/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:47:59 by akretov           #+#    #+#             */
/*   Updated: 2025/01/14 18:11:43 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string     string = "HI THIS IS BRAIN";
    std::string     *stringPTR = &string;
    std::string&    stringREF = string;

    std::cout << "Memory of the string: " << &string << std::endl;
    std::cout << "Memory of the pointer to a string: " << &stringPTR << std::endl;
    std::cout << "Memory of the reference of a string: " << &stringREF << std::endl;

    std::cout << "Value of the string: " << string << std::endl;
    std::cout << "Value of the pointer to a string: " << stringPTR << std::endl;
    std::cout << "Value of the reference of a string: " << stringREF << std::endl;

    return 0;
}