/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 23:29:07 by mel-jira          #+#    #+#             */
/*   Updated: 2024/03/29 17:52:19 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>
# include <iomanip>

class Phonebook
{
    public:
        Contact get_contact(int index);
        void    set_contact(int index, Contact contact);
    private:
        Contact contact[8];
};

#endif