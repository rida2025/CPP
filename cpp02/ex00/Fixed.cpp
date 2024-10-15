/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:02:59 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/20 18:36:21 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Deafault constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(Fixed const &copy_constructor)
{
    std::cout << "copy constructor called" << std::endl;
    this->value = copy_constructor.value;
}

Fixed::~Fixed(){
    std::cout << "destructor called" << std::endl;
}

Fixed &Fixed::operator = (Fixed const &copy_assignment)
{
    std::cout << "copy assignment operator called" << std::endl;
    this->value = copy_assignment.value;
    return (*this);
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}


