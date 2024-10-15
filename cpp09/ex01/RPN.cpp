/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:34:17 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/21 16:29:16 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
 
bool    do_op(std::stack<double> &rpn, char op){
    double value1 = 0;
    double value2 = 0;
    if (rpn.size() < 2)
        return (true);
    value1 = rpn.top();
    rpn.pop();
    value2 = rpn.top();
    rpn.pop();
    if (op == '+'){
        value1 = value2 + value1;
    }
    else if (op == '-'){
        value1 = value2 - value1;
    }
    else if (op == '*'){
        value1 = value2 * value1;
    }
    else if (op == '/'){
        if (value1 == 0)
            return true;
        value1 = value2 / value1;
    }
    rpn.push(value1);
    return (false);
}

void rpn(char *str){
    std::stack<double> rpn;
    int i = 0;
    while (str[i]){
        while (str[i] && (str[i] == ' ' || str[i] == '\t'))
            i++;
        if (str[i] && ((str[i] >= '0' && str[i] <= '9') || (str[i] == '*' || str[i] == '-' || str[i] == '/' || str[i] == '+'))){   
            if (str[i] && str[i] >= '0' && str[i] <= '9')
                rpn.push((str[i]-'0'));
            else{
                if (do_op(rpn , str[i])){
                    std::cerr << "Error" << std::endl;
                    return ;
                }
            }
            i++;
        }
        else{
            std::cerr << "Error" << std::endl;
            return ;
        }
        if (str[i] && str[i] >= '0' && str[i] <= '9'){
            std::cerr << "Error" << std::endl;
            return ;
        }
    }
    if (rpn.size() > 1){
        std::cerr << "Error" << std::endl;
        return ;
    }
    std::cout << rpn.top() << std::endl;
}
