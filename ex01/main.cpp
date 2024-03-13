/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:36:05 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/13 01:46:45 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"

void to_lower(char& c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
}


int main ()
{
        void (*funcPtr)(char&) = to_lower;
       std::string str = "HELLO WORLD!"; 

       iter(&str[0], str.size(), funcPtr);
       std::cout << str << std::endl;
}