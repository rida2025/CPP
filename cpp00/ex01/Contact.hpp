/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 23:28:52 by mel-jira          #+#    #+#             */
/*   Updated: 2024/03/29 17:51:06 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>

class Contact
{
    public:
        std::string get_name(void);
        std::string get_lastname(void);
        std::string get_nickname(void);
        std::string get_phone_number(void);
        std::string get_darkest_secret(void);
        void set_name(std::string input);
        void set_lastname(std::string input);
        void set_nickname(std::string input);
        void set_phone_number(std::string input);
        void set_darkest_secret(std::string input);
    private:
        std::string name;
        std::string lastname;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};

#endif