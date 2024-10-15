/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:24:35 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/07 13:11:43 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <limits>
#include <fstream>
#include <sstream>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter const &cpy_cons);
        ScalarConverter &operator=(ScalarConverter const &cpy_asy);
    public:
        ~ScalarConverter();

        static void convert(const std::string &literal);
};
