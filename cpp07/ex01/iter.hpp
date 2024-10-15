/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:49:23 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/09 11:29:54 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename B, typename A>
void iter(A *address, size_t length, void (*f)(B x)){
    if (!address  || !f)
        return ;
    for(size_t i = 0;i < length;i++){
        f(address[i]);
    }
}
