/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:49:39 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/14 17:46:15 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template <class T>
class Array{
    private:
        T *_array;
        unsigned int _size;
    public:
        class incorrectIndexException : public std::exception{
            public:
                virtual const char *what() const throw(){
                    return "Index out of range";
                }
        };
        
        Array(unsigned int n) : _array(new T[n]), _size(n){
            for (size_t i = 0; i < n; i++){
                _array[i] = T();
            }
        }

        unsigned int size() const{
          return _size;
        }

        void print() const{
            unsigned int i;
            for (i = 0; i < _size; i++){
                std::cout << _array[i];
            }
        }

        Array(const Array<T>& src) : _array(new T[src.size() ]), _size(src.size()){
            *this = src;
        }

        Array() : _array(NULL), _size(0) {
        }

        Array<T>& operator=(const Array<T>& src){
            if (this != &src){
                delete []_array;
                if (size() > 0)
                    _array = new T[src.size()];
                for (unsigned int i = 0; i < src.size(); i++){
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
        
        T const & operator[](unsigned int n) const{
            if (n < 0 || n > size())
                throw incorrectIndexException();
            return _array[n];
        }
        
        ~Array(){
            delete []_array;
        }
};