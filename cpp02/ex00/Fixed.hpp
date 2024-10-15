/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:03:01 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/20 18:11:35 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int value;
        static const int fraction = 8;
    public:
        Fixed();
        Fixed(Fixed const &copy_constructure);
        Fixed &operator = (Fixed const &copy_assignment);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif