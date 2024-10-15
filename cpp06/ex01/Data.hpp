/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:16:48 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/07 13:45:09 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Data
{
    private:
        int number;
    public:
        Data();
        ~Data();
        Data(Data const &cpy_cons);
        Data &operator=(Data const &cpy_asy);
        int getNumber();
        void setNumber(int nbr);
};