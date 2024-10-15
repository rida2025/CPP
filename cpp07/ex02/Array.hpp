/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:40:33 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/09 18:28:33 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>

class Array
{
    private:
        unsigned int _size;
        T* array;
    public:
        Array(): _size(0), array(new T[0]){
            
        }
        Array(unsigned int n): _size(n), array(new T[n]()){
            
        }
        Array(Array const &cpy_cons){
            array = NULL;
            *this = cpy_cons;
        }
        Array &operator=(Array const &cpy_asy){
            if (this != &cpy_asy){
                if (array)
                    delete[] array;
                this->_size = cpy_asy._size;
                this->array = new T[_size];
                for (unsigned int i = 0;i+1 < _size;i++){
                    array[i] = cpy_asy.array[i];
                }
            }
            return (*this);
        }
        ~Array(){
            std::cout << "destructor was called!"<< std::endl;
            if (array)
                delete[] array;
        }

        T &operator[](unsigned int i){
            if (i >= _size || i < 0){
                throw OutofBound();
            }
            return (array[i]);
        }
        class OutofBound : public std::exception
        {
            public:
                const char* what() const throw(){
                    return "Out of Bounds";
                }
        };

        unsigned int size(void) const {
            return (this->_size);
        }
};
