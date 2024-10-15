/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:26:08 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/10 17:45:30 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    {
        std::cout << "_____start of first test_____" << std::endl;    
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << "______end of first test_____" << std::endl;    
    }
    {
        try{
            std::cout << "______start of second test______" << std::endl;  
            Span sp = Span(0);
            sp.addNumber(6);
            std::cout << "______end of last test______" << std::endl;  
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    {
        try{
            std::cout << "______start of third test______" << std::endl;
            std::vector<int> numbers;
            numbers.push_back(1);
            numbers.push_back(2);
            numbers.push_back(3);
            numbers.push_back(4);
            numbers.push_back(5);
            numbers.push_back(6);
            numbers.push_back(7);
            numbers.push_back(8);
            numbers.push_back(9);
            numbers.push_back(10);
            numbers.push_back(11);
            numbers.push_back(12);
            numbers.push_back(13);
            numbers.push_back(14);
            numbers.push_back(15);
            numbers.push_back(16);
            numbers.push_back(17);
            numbers.push_back(18);
            Span sp = Span(20);
            sp.addNumbers(numbers.begin(), numbers.end());
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            sp.addNumber(6);
            std::cout << "______end of third test______" << std::endl;  
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    
    return 0;
}