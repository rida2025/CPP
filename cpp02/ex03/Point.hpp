/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:12:02 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/21 22:20:16 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(Point const &cpy_con);
        Point &operator=(Point const &cpy_asy);
        ~Point();
        Point(int x, int y);
        Point(const float x, const float y);
        float get_x() const;
        float get_y() const;
};

bool bsp(Point const &a, Point const &b, Point const &c, Point const &point);

#endif