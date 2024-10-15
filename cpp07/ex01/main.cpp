/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:18:18 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/09 11:41:54 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(int x) {
    std::cout << x << " ";
}

void printDouble(double x) {
    std::cout << x << " ";
}

void printString(std::string x) {
    std::cout << x << " ";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::string arr3[] = {"salam", "hello", "world", "peace", "ocean"};

    iter(arr, 5, printInt);

    std::cout << std::endl;

    iter(arr2, 5, printDouble);

    std::cout << std::endl;

    iter(arr3, 5, printString);
    
    std::cout << std::endl;

    return 0;
}
