/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:48:18 by mel-jira          #+#    #+#             */
/*   Updated: 2024/06/28 11:03:04 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): AForm("shrubbery creation", 145, 137), target(_target){
    std::cout << "ShrubberyCreationForm paramater constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &cpy_asy){
    std::cout << "ShrubberyCreationForm calling copy assignment" << std::endl;
    (void)cpy_asy;
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy_cons){
    std::cout << "ShrubberyCreationForm calling copy constructor" << std::endl;
    *this = cpy_cons;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else {
        std::ofstream file(this->target + "_shrubbery");
        file << "        __--__           " << std::endl;
        file << "       /~~~~~~\\        " << std::endl;
        file << "      /~~ ~~ ~~\\       " << std::endl;
        file << "      {~~ ~~ ~~}        " << std::endl;
        file << "       \\~~  ~~/        " << std::endl;
        file << "        \\ ~~ /         " << std::endl;
        file << "         |  |           " << std::endl;
        file << "         |  |           " << std::endl;
        file << "        //  \\\\        " << std::endl;
        file.close();
    }
}
