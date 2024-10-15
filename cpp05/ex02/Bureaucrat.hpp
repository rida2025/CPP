/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:19:43 by mel-jira          #+#    #+#             */
/*   Updated: 2024/06/25 17:46:21 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        std::string const   name;
        int                 grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string const _name, int _grade);
        virtual     ~Bureaucrat();
        Bureaucrat  &operator=(Bureaucrat const &cpy_asy);
        Bureaucrat(Bureaucrat const  &cpy_cons);

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        std::string getName(void) const;
        int         getGrade() const;
        void        increaseGrade(void);
        void        decreaseGrade(void);

        void            signForm(AForm &form);
        void            executeForm(AForm const & form);
};

std::ostream& operator<<(std::ostream &out, Bureaucrat& obj);

#endif