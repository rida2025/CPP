/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:03:01 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/21 18:03:40 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int value;
        static const int fraction = 8;
    public:
        Fixed();
        Fixed(int const val);
        Fixed(float const val);
        Fixed(Fixed const &copy_constructure);
        Fixed &operator = (Fixed const &copy_assignment);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        bool operator>(const Fixed &obj) const;
        bool operator>=(const Fixed &obj) const;
        bool operator<(const Fixed &obj) const;
        bool operator<=(const Fixed &obj) const;
        bool operator==(const Fixed &obj) const;
        bool operator!=(const Fixed &obj) const;
        
        Fixed operator+(const Fixed &obj) const;
        Fixed operator-(const Fixed &obj) const;
        Fixed operator*(const Fixed &obj) const;
        Fixed operator/(const Fixed &obj) const;
        
        Fixed operator++(void);
        Fixed operator++(int);
        Fixed operator--(void);
        Fixed operator--(int);
        Fixed static &min(Fixed &objA, Fixed &objB);
        Fixed static &min(const Fixed &objA, const Fixed &objB);
        Fixed static &max(Fixed &objA, Fixed &objB);
        Fixed static &max(const Fixed &objA, const Fixed &objB);
        
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif