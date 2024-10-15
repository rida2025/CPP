/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 07:58:29 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/10 17:49:12 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

template<typename T>
void easyfind(T &t, int x){
    typename T::iterator it;
    it = std::find(t.begin(), t.end(), x);
    if (it != t.end())
        std::cout << "we find " << x << " in t" << std::endl;
    else
        std::cout << "we couldn't find " << x << " int t" << std::endl;
}
