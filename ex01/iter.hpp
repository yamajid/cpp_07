/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:36:03 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/13 01:46:57 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T, typename S>
void iter(T *array, S size, void (*f)(T&)){
    for (S i = 0; i < size; i++)
        f(array[i]);
}