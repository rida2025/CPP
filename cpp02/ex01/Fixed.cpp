/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:02:59 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/21 16:36:53 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): value(0){
    std::cout << "Deafault constructor called" << std::endl;
}

Fixed &Fixed::operator = (Fixed const &copy_assignment)
{
    std::cout << "copy assignment operator called" << std::endl;
    this->value = copy_assignment.value;
    return (*this);
}

Fixed::Fixed(int const val){
     std::cout << "Int constructor called" << std::endl;
    this->value = val << fraction;
}

Fixed::Fixed(float const val){
     std::cout << "Float constructor called" << std::endl;
    this->value = roundf(val * (1 << fraction));
}
        
Fixed::Fixed(Fixed const &copy_constructor)
{
    std::cout << "copy constructor called" << std::endl;
    *this = copy_constructor;
}

Fixed::~Fixed(){
    std::cout << "destructor called" << std::endl;
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

float Fixed::toFloat(void) const
{
    return ((float)this->value / (1 << fraction));
}

int Fixed::toInt( void ) const
{
    return (this->value >> fraction);
}

std::ostream &operator<<(std::ostream &os, Fixed const &obj)
{
    os << obj.toFloat();
    return (os);
}
