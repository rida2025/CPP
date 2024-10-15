/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:10:43 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/07 13:20:25 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Data.hpp"
#include <iostream>
#include <string>

class Serialization
{
    private:
        Serialization();
        Serialization(Serialization const &cpy_cons);
        Serialization &operator=(Serialization const &cpy_asy);
    public:
        ~Serialization();

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};
