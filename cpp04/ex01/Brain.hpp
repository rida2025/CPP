/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:33:26 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/25 13:42:05 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
    std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain &operator=(Brain const &cpyasy);
        Brain(Brain const &cpycons);
};

#endif