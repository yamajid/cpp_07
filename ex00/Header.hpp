/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:21:33 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/12 22:19:05 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
void swap(T& a, T& b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(T& a, T& b) {
    if (a < b)
        return a;
    else if (a == b)
        return b;
    return b;
}

template <typename T>
T max(T& a, T& b) {
    if (a > b)
        return a;
    else if (a == b)
        return b;
    return b;
}
