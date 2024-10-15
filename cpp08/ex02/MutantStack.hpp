/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:07:00 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/10 17:54:20 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <deque>

template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
    public:
        typedef typename Container::iterator iterator;
        MutantStack(){};
        ~MutantStack(){this->c.clear();}
        MutantStack(MutantStack const &cpy_cons): std::stack<T>(cpy_cons){};
        MutantStack &operator=(MutantStack const &cpy_asy){
            if (this != &cpy_asy){
                this->c = cpy_asy.c;
            }
            return (*this);
        };

        iterator begin() {
             return this->c.begin();
        }
        iterator end() {
            return this->c.end();
        }
};
