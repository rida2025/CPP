/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:24:33 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/10 11:48:55 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int size;
        std::vector<int> numbers;
    public:
        Span();
        Span(unsigned int N);
        ~Span();
        Span(Span const &cpy_cons);
        Span &operator=(Span const &cpy_asy);

        void addNumber(int nbr);
        void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
};
