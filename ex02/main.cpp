/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:51:34 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/13 01:47:00 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main (){

    try{
        Array<int> a(5);
        a[0] = 1;
        a[1] = 2;
        a[2] = 3;
        a[3] = 4;
        a[4] = 5;  
        a.print();
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    // int *a = new int();
    // std::cout << *a << std::endl;
} 