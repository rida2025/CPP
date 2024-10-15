/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:20:22 by mel-jira          #+#    #+#             */
/*   Updated: 2024/06/27 14:27:02 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool        sign;
        const int   grade_to_sign;
        const int   grade_to_execute;
    public:
        Form();
        Form(std::string _name, const int _grade_to_sign, const int grade_to_execute);
        ~Form();
        Form &operator=(Form const &copy_asy);
        Form(Form const &copy_cons);
    
        std::string get_name(void);
        bool        get_sign(void);
        int         get_grade_to_sign(void);
        int         get_grade_to_execute(void);

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

        void beSigned(Bureaucrat &obj);
        
};

std::ostream& operator<<(std::ostream &out, Form& obj);

#endif