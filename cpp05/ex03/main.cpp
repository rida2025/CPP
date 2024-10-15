/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:19:46 by mel-jira          #+#    #+#             */
/*   Updated: 2024/06/28 11:07:46 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
    // {
    //     try {
    //     Bureaucrat bureaucrat("mohammed", 1);
    //     ShrubberyCreationForm form1("Shrubbery");
    //     RobotomyRequestForm form2("Robotomy");
    //     PresidentialPardonForm form3("President");

    //     std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
    //     bureaucrat.signForm(form1);
    //     bureaucrat.executeForm(form1);
    //     std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
    //     bureaucrat.signForm(form2);
    //     bureaucrat.executeForm(form2);
    //     bureaucrat.executeForm(form2);
    //     bureaucrat.executeForm(form2);
    //     bureaucrat.executeForm(form2);
    //     std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
    //     bureaucrat.signForm(form3);
    //     bureaucrat.executeForm(form3);
    //     } catch (std::exception &e) {
    //         std::cout << e.what() << std::endl;
    //     }
    // }
    // std::cout << "______________________new________________________________" << std::endl;
    // {
    //     try
    //     {
    //         Bureaucrat bureaucrat("mohammed", 1);
    //         ShrubberyCreationForm form1("Shrubbery");
    //         RobotomyRequestForm form2("Robotomy");
    //         PresidentialPardonForm form3("President");

    //         std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
    //         bureaucrat.executeForm(form1);
    //         std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
    //         bureaucrat.executeForm(form2);
    //         bureaucrat.executeForm(form2);
    //         bureaucrat.executeForm(form2);
    //         bureaucrat.executeForm(form2);
    //         std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
    //         bureaucrat.executeForm(form3);
    //     }
    //     catch (std::exception &e)
    //     {
    //         std::cout << e.what() << std::endl;
    //     }
    // }
    {
        try {
            Bureaucrat bureaucrat("croku", 1);
            Intern *slave = new Intern();
            std::cout << "\n--------------- Form 1 ( President ) ---------------" << std::endl;
            AForm *form1 = slave->makeForm("presidential pardon", "reda");
            bureaucrat.signForm(*form1);
            bureaucrat.executeForm(*form1);
            std::cout << "\n-----------------------------------------------------" << std::endl;
            delete form1;
        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "\n-----------------------------------------------------" << std::endl;
    {
        try
        {
            Intern someRandomIntern;
            AForm* rrf;
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            delete rrf;
        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}
