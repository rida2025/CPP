/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:06:39 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/10 17:54:16 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void) 
{
    std::cout << "__________different test__________"<< std::endl;
    {
        MutantStack<int> mstack;
    
        mstack.push(5);
        mstack.push(17);
    
        std::cout << mstack.top() << std::endl;
        
        mstack.pop();
        
        std::cout << mstack.size() << std::endl;
        
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        
        mstack.push(0);
        
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        
        ++it;
        --it;
        
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    std::cout << "__________more test__________"<< std::endl;
    {
        MutantStack<int> mstack;
    
        mstack.push(1);
        mstack.push(2);
        mstack.push(3);
        mstack.push(4);
        mstack.push(5);
        mstack.push(6);
        mstack.push(7);
        mstack.push(8);
        mstack.push(9);
        mstack.push(10);
        
        std::cout << "MutantStack size: " << mstack.size() << std::endl;
        std::cout << "MutantStack top: " << mstack.top() << std::endl;
        
        mstack.push(20);
        
        std::cout << "MutantStack top: " << mstack.top() << std::endl;
        
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    return 0;
}
