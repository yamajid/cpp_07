/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:49:39 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/13 01:47:18 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template <class T>
class Array{
    private:
        T *_array;
    public:
        class incorrectIndexException : public std::exception{
            public:
                virtual const char *what() const throw(){
                    return "Index out of range";
                }
        };
        Array(unsigned int n) : _array(new T[n]) {
            for (size_t i = 0; i < n; i++){
                _array[i] = 0;
            }
        }
        unsigned int size() const{
            size_t i;
            for (i = 0; _array[i]; i++);
            return i; 
        }
        void print() const{
            size_t i;
            for (i = 0; i < size(); i++){
                std::cout << _array[i];
            }
        }
        Array(const Array<T>& src) : _array(new T[src.size()]) {
            *this = src;
        }
        Array() : _array(new T[0]) {
        }
        Array<T>& operator=(const Array<T>& src){
            if (this != &src){
                delete []_array;
                _array = new T[src.size()];
                for (size_t i = 0; i < src.size(); i++){
                    _array[i] = src._array[i];
                }
            }
            return *this;
        }
        T& operator[](unsigned int n){
            if (n < 0 || n > size())
                throw incorrectIndexException();
            return _array[n];
        }
        ~Array(){
            if (_array != NULL)
                delete[] _array;
        }
        };