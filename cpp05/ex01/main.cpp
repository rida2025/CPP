/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:19:46 by mel-jira          #+#    #+#             */
/*   Updated: 2024/06/25 10:56:31 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    {
        try
        {
            Bureaucrat ahmed = Bureaucrat("ahmed", -1);
            ahmed.increaseGrade();
            std::cout << ahmed;
        }
        catch (const Bureaucrat::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (const Bureaucrat::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "____________________________________" << std::endl;
    {
        try
        {
            Bureaucrat ahmed = Bureaucrat("ahmed", 151);
            ahmed.decreaseGrade();
            std::cout << ahmed;
        }
        catch (const Bureaucrat::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (const Bureaucrat::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "____________________________________" << std::endl;
    {
        try
        {
            Bureaucrat ahmed = Bureaucrat("ahmed", 1);
            std::cout << ahmed;
            ahmed.decreaseGrade();
            std::cout << ahmed;
        }
        catch (const Bureaucrat::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (const Bureaucrat::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "____________________________________" << std::endl;
    {
        try
        {
            Bureaucrat ahmed = Bureaucrat("ahmed", 150);
            std::cout << ahmed;
            ahmed.increaseGrade();
            std::cout << ahmed;
        }
        catch (const Bureaucrat::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (const Bureaucrat::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "____________________________________" << std::endl;
    {
        try {
        Bureaucrat bureaucrat("goku",11);
        Form form("men7a for 10h logintime", 150, 150);

        bureaucrat.signForm(form);

        std::cout << form;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "____________________________________" << std::endl;
    {
        try {
        Bureaucrat bureaucrat("reda",75);
        Form form("zyda fi men7a 1k+dh", 50, 150);

        bureaucrat.signForm(form);

        std::cout << form;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}