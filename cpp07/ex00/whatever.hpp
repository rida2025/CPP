/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:39:06 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/09 10:48:30 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename B>
B min(B a, B b){
    if (a >= b)
        return b;
    return a;
}

template <typename C>
C max(C a, C b){
    if (a > b)
        return a;
    return b;
}