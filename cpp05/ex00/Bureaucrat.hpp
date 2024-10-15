/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:19:43 by mel-jira          #+#    #+#             */
/*   Updated: 2024/06/25 10:37:08 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

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
};

std::ostream& operator<<(std::ostream &out, Bureaucrat& obj);