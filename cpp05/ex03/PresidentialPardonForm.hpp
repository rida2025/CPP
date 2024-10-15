/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:48:05 by mel-jira          #+#    #+#             */
/*   Updated: 2024/06/28 10:16:50 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm(std::string _target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &cpy_cons);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &cpy_asy);
        void execute(Bureaucrat const & executor) const;

        
};

#endif