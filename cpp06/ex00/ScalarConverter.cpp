/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:24:38 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/07 16:59:13 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    
}

ScalarConverter::~ScalarConverter(){
    
}

ScalarConverter::ScalarConverter(ScalarConverter const &cpy_cons){
    (void)cpy_cons;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &cpy_asy){
    (void)cpy_asy;
    return (*this);
}

enum types{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    INF,
    XNAN,
    UNKNOWN
};

int fractionN(const std::string &nbr)
{
    int i = 0;
    int fraction = 0;
    while (nbr[i])
    {
        if (nbr[i] == '.'){
            while (nbr[i])
            {
                i++;
                fraction++;
            }
            return (fraction);
        }
        i++;
    }
    return (0);
}

std::string myto_string(double value) {
    std::stringstream oss;
    oss << value;
    return oss.str();
}

int find_type(const std::string &value, int &i, float &f, double &d){
    std::stringstream ss;
    std::string tmp;
    if (value == "-inff" || value == "+inff" || value == "-inf" || value == "+inf")
        return (INF);
    if (value == "nan" || value == "nanf")
        return (XNAN);
    if (value.size() == 1)
        return (CHAR);
    tmp = value;
    if (tmp.back() == 'f')
    {
        tmp.pop_back();
        ss.clear();
        ss.str(tmp);
        ss >> f;
        std::cout << f << std::endl;
        if (!ss.fail() && ss.eof())
            return (FLOAT);
    }
    ss.clear();
    ss.str(value);
    ss >> i;
    if (!ss.fail() && ss.eof())
        return (INT);
    ss.clear();
    ss.str(value);
    ss >> d;
    std::cout << std::setprecision(13);
    if (!ss.fail() && ss.eof())
        return (DOUBLE);
    return (UNKNOWN);
}

bool invisible_float(const std::string &str){
    int i = 0;
    while (str[i] && str[i] != '.')
        i++;
    if (str[i] && str[i + 1] && str[i + 1] == '0')
        return (true);
    return (false);
}

void ScalarConverter::convert(const std::string &literal){
    int type = 0;
    char c = 0;
    int i = 0;
    float f = 0.0f;
    double d = 0.0;
    type = find_type(literal, i, f, d);
    if (type == XNAN){
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (type == INF){
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: " << literal << std::endl;
        std::cout << "float: " << literal << std::endl;
        std::cout << "double: " << literal << std::endl;
    }
    else if (type == CHAR)
    {
        c = literal[0];
        if (std::isdigit(c))
            c -= 48;
        i = static_cast<int>(c);
        f = static_cast<float>(c);
        d = static_cast<double>(c);
        if (std::isprint(c))
            std::cout << "char: \'" << c << "\'" << std::endl;
        else
            std::cout << "char: impossible" << std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << f << ".0f" << std::endl;
        std::cout << "double: " << d << ".0" << std::endl;
    }
    else if (type == INT)
    {
        c = static_cast<char>(i);
        f = static_cast<float>(i);
        d = static_cast<double>(i);
        if (i >= 32 && i <= 126)
            std::cout << "char: \'" << c << "\'" << std::endl;
        else if (c < 32 || c > 126)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: impossible" << std::endl;
        if (d < INT_MIN || d > INT_MAX)
            std::cout << "int: impossible" << std::endl;
        else   
            std::cout << "int: " << i << std::endl;
        std::cout << "float: " << f << ".0f" << std::endl;
        std::cout << "double: " << d << ".0" << std::endl;
    }
    else if (type == FLOAT)
    {
        c = static_cast<char>(f);
        i = static_cast<int>(f);
        d = static_cast<double>(f);
        if (std::isprint(c))
            std::cout << "char: \'" << c << "\'" << std::endl;
        else if (c < 32 || c > 126)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: impossible" << std::endl;
        if (d < INT_MIN || d > INT_MAX)
            std::cout << "int: impossible" << std::endl;
        else   
            std::cout << "int: " << i << std::endl;
        if (literal.find(".") != std::string::npos && fractionN(myto_string(f)))
        {
            std::cout << "float: " << std::setprecision(7) << f << "f" << std::endl;
            std::cout << "double: " << std::setprecision(16) << d << "" << std::endl;
        }
        else if (literal.find(".") != std::string::npos && !fractionN(myto_string(f))){
            std::cout << "float: "  << std::setprecision(7) << f << ".0f" << std::endl;
            std::cout << "double: " << std::setprecision(16) << d << ".0" << std::endl;
        }
        else
        {
            std::cout << "float: " << std::setprecision(7) << f << "f" << std::endl;
            std::cout << "double: " << std::setprecision(16) << d << ".0" << std::endl;
        }
    }
    else if (type == DOUBLE)
    {
        c = static_cast<char>(d);
        i = static_cast<int>(d);
        f = static_cast<float>(d);
        if (std::isprint(c))
            std::cout << "char: \'" << c << "\'" << std::endl;
        else if (c < 32 || c > 126)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: impossible" << std::endl;
        if (d < INT_MIN || d > INT_MAX)
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << i << std::endl;
        if (literal.find(".") != std::string::npos && fractionN(myto_string(f)))
        {
            if (d < std::numeric_limits<float>::min() || d > std::numeric_limits<float>::max())
                std::cout << "float: impossible" << std::endl;
            else
                std::cout << "float: " << std::setprecision(7) << f << "f" << std::endl;
            std::cout << "double: " << std::setprecision(16) << d << "" << std::endl;
        }
        else if (literal.find(".") != std::string::npos && !fractionN(myto_string(f))){
            if (d < std::numeric_limits<float>::min() || d > std::numeric_limits<float>::max())
                std::cout << "float: impossible" << std::endl;
            else
                std::cout << "float: " << std::setprecision(7) << f << ".0f" << std::endl;
            std::cout << "double: " << std::setprecision(16) << d << ".0" << std::endl;
        }
        else
        {
            if (d < std::numeric_limits<float>::min() || d > std::numeric_limits<float>::max())
                std::cout << "float: impossible" << std::endl;
            else
                std::cout << "float: " << std::setprecision(7) << f << "f" << std::endl;
            std::cout << "double: " << std::setprecision(16) << d << ".0" << std::endl;
        }
    }
    else
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}
