/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:51:46 by mel-jira          #+#    #+#             */
/*   Updated: 2024/06/28 10:44:32 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
    std::cout << "Intern default constructor was called" << std::endl;
}

Intern::~Intern(){
    std::cout << "Intern destructor was called" << std::endl;
}

Intern::Intern(Intern const &cpy_cons){
    std::cout << "Intern copy constructor was called" << std::endl;
    *this = cpy_cons;
}

Intern &Intern::operator=(Intern const &copy_asy){
    std::cout << "Intern copy assignment was called" << std::endl;
    (void)copy_asy;
    return (*this);
}

const char* Intern::FormDoesNotExistException::what(void) const throw()
{
    return ("Error! Intern can't create form Because it doesn't exist");
}

AForm* Intern::makePresidentialPardonForm(const std::string& target) {
    std::cout << "Intern creates presidential pardon" << std::endl;
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeRobotomyRequestForm(const std::string& target) {
    std::cout << "Intern creates robotomy request" << std::endl;
    return new RobotomyRequestForm(target);
}

AForm* Intern::makeShrubberyCreationForm(const std::string& target) {
    std::cout << "Intern creates shrubbery creation" << std::endl;
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(std::string form_name, std::string target_form){
    int i = 0;
    std::string form[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    AForm* (Intern::*ptr[3])(const std::string&) = {&Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm};
    while (i < 3 && form_name != form[i])
        i++;
    switch(i)
    {
        case 0:
            return (this->*ptr[i])(target_form);
        
        case 1:
            return (this->*ptr[i])(target_form);

        case 2:
            return (this->*ptr[i])(target_form);
        
        default:
            throw FormDoesNotExistException();
        break;
    }
    return (NULL);
}
