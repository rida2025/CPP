/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:48:15 by mel-jira          #+#    #+#             */
/*   Updated: 2024/06/28 10:22:23 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm(std::string _target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &cpy_cons);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &copy_asy);
        void execute(const Bureaucrat& executor) const;
};

#endif