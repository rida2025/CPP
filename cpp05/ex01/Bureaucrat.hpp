/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:19:43 by mel-jira          #+#    #+#             */
/*   Updated: 2024/06/25 10:36:59 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string const   name;
        int                 grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string const _name, int _grade);
        ~Bureaucrat();
        Bureaucrat &operator=(Bureaucrat const &cpy_asy);
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
        std::string getName(void);
        int getGrade();
        void increaseGrade(void);
        void decreaseGrade(void);

        void signForm(Form &form);
};

std::ostream& operator<<(std::ostream &out, Bureaucrat& obj);

#endif