/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:26:10 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/10 14:33:12 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): size(0){

}

Span::Span(unsigned int N): size(N){
    
}

Span::~Span(){

}

Span::Span(Span const &cpy_cons){
    *this = cpy_cons;
}

Span &Span::operator=(Span const &cpy_asy){
    if (this != &cpy_asy){
        this->size = cpy_asy.size;
        this->numbers = cpy_asy.numbers;
    }
    return (*this);
}

void Span::addNumber(int nbr){
    if (this->numbers.size() >= this->size)
        throw std::logic_error("size to small");
    numbers.push_back(nbr);
    this->size++;
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end){
    std::vector<int> tmp(begin, end);
	if (tmp.size() >= (size - numbers.size()))
		throw std::logic_error("range is too big for the space left");
    numbers.insert(numbers.end(), begin, end);
}

int Span::shortestSpan(){
    if (this->size < 2) {
        throw std::logic_error("size too small");
    }
    std::sort(numbers.rbegin(), numbers.rend());
    int value = numbers[0] - numbers[1];
    for (size_t i = 0;i+1 < numbers.size();i++){
        if (numbers[i] - numbers[i+1] < value)
            value = numbers[i] - numbers[i+1];
    }
    return (value);
}

int Span::longestSpan(){
    if (this->size < 2) {
        throw std::logic_error("size too small");
    }
    int min = *std::min_element(numbers.begin(),numbers.end());
    int max = *std::max_element(numbers.begin(),numbers.end());
    return (max - min);
}
