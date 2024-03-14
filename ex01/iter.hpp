/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:36:03 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/13 17:05:20 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T, typename S>
void iter(T *array, size_t size, void (*f)(S&)){
    for (size_t i = 0; i < size; i++)
        f(array[i]);
}