/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:20:22 by mel-jira          #+#    #+#             */
/*   Updated: 2024/06/27 13:36:56 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool        sign;
        const int   grade_to_sign;
        const int   grade_to_execute;
    public:
        AForm();
        AForm(std::string _name, const int _grade_to_sign, const int grade_to_execute);
        virtual ~AForm();
        AForm &operator=(AForm const &copy_asy);
        AForm(AForm const &copy_cons);
    
        std::string getName(void) const;
        bool        getSign(void) const;
        int         getGradeToSign(void) const;
        int         getGradeToExecute(void) const;

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
        class FormNotSignedException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        void beSigned(Bureaucrat &obj);
        virtual void    execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream &out, AForm& obj);

#endif