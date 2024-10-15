/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:02:59 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/21 18:07:15 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): value(0){
    // std::cout << "Deafault constructor called" << std::endl;
}

Fixed &Fixed::operator = (Fixed const &copy_assignment)
{
    // std::cout << "copy assignment operator called" << std::endl;
    this->value = copy_assignment.getRawBits();
    return (*this);
}

Fixed::Fixed(int const val){
    //  std::cout << "Int constructor called" << std::endl;
    this->value = val * (1 << fraction);
}

Fixed::Fixed(float const val){
    //  std::cout << "Float constructor called" << std::endl;
    this->value = std::roundf(val * (1 << fraction));
}
        
Fixed::Fixed(Fixed const &copy_constructor)
{
    // std::cout << "copy constructor called" << std::endl;
    *this = copy_constructor;
}

Fixed::~Fixed(){
    // std::cout << "destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
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

bool Fixed::operator>(const Fixed &obj) const
{
    return this->getRawBits() > obj.getRawBits();
}

bool Fixed::operator>=(const Fixed &obj) const
{
    return (this->getRawBits() >= obj.getRawBits());
}

bool Fixed::operator<(const Fixed &obj) const
{
    return (this->getRawBits() < obj.getRawBits());
}

bool Fixed::operator<=(const Fixed &obj) const
{
    return (this->getRawBits() <= obj.getRawBits());
}

bool Fixed::operator==(const Fixed &obj) const
{
    return (this->getRawBits() == obj.getRawBits());
}

bool Fixed::operator!=(const Fixed &obj) const
{
    return (this->getRawBits() != obj.getRawBits());
}

Fixed Fixed::operator+(const Fixed &obj) const{
    int result = this->toFloat() + obj.toFloat();
    return ((Fixed)result);
}
Fixed Fixed::operator-(const Fixed &obj) const{
    int result = this->toFloat() - obj.toFloat();
    return ((Fixed)result);
}
Fixed Fixed::operator*(const Fixed &obj) const{
    int result = this->toFloat() * obj.toFloat();
    return ((Fixed)result);
}
Fixed Fixed::operator/(const Fixed &obj) const{
    int result = this->toFloat() / obj.toFloat();
    return ((Fixed)result);
}
        
Fixed Fixed::operator++(void)
{
    ++this->value;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp;
    tmp = *this;
    tmp.value = this->value++;
    return tmp;
}

Fixed Fixed::operator--(void)
{
    --this->value;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp;
    tmp = *this;
    tmp.value = this->value--;
    return tmp;
}

Fixed &Fixed::min(Fixed &objA, Fixed &objB){
    if (objA.value >= objB.value)
        return (objB);
    return (objA);
}

Fixed &Fixed::min(const Fixed &objA, const Fixed &objB){
    if (objA.value >= objB.value)
        return ((Fixed&)objB);
    return ((Fixed&)objA);
}

Fixed &Fixed::max(Fixed &objA, Fixed &objB){
    if (objA.value >= objB.value)
        return (objA);
    return (objB);
}

Fixed &Fixed::max(const Fixed &objA, const Fixed &objB){
    if (objA.getRawBits() >= objB.getRawBits())
        return ((Fixed&)objA);
    return ((Fixed&)objB);
}
