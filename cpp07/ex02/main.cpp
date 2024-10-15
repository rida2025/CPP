/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:40:35 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/09 18:37:07 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
    Array<int> a;
    std::cout << "Size of a: " << a.size() << std::endl;

    Array<int> b(5);
    std::cout << "Size of b: " << b.size() << std::endl;

    for (unsigned int i = 0; i < b.size(); ++i) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;

    Array<int> c(b);
    std::cout << "Size of c: " << c.size() << std::endl;

    for (unsigned int i = 0; i < c.size(); ++i) {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;


    Array<int> d = b;
    std::cout << "Size of d: " << d.size() << std::endl;

    for (unsigned int i = 0; i < d.size(); ++i) {
        std::cout << d[i] << " ";
    }
    std::cout << std::endl;

    for (unsigned int i = 0; i < b.size(); ++i) {
        b[i] = i + 1;
    }

    for (unsigned int i = 0; i < d.size(); ++i) {
        d[i] = i + 2;
    }

    std::cout << "Modified   b: ";
    for (unsigned int i = 0; i < b.size(); ++i) {
        std::cout << b[i] << " ";
    }
    
    std::cout << std::endl;

    std::cout << "Modified   d: ";
    for (unsigned int i = 0; i < d.size(); ++i) {
        std::cout << d[i] << " ";
    }
    
    std::cout << std::endl;
    
    std::cout << "Unmodified c: ";
    for (unsigned int i = 0; i < c.size(); ++i) {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "__________________fail__________________" << std::endl;
    try {
        std::cout << b[10] << std::endl;
    } catch (const Array<int>::OutofBound& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << b[6] << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "__________________work__________________" << std::endl;
    try {
        std::cout << b[0] << std::endl;
    } catch (const Array<int>::OutofBound& e) {
        std::cout << e.what() << std::endl;
    }
    
    try {
        std::cout << b[1] << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    {
        int *a = new int(123);
        std::cout << "a= "<< *a << std::endl;
        delete a;
    }
    return 0;
}