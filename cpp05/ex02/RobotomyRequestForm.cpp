/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:48:13 by mel-jira          #+#    #+#             */
/*   Updated: 2024/06/28 11:04:03 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target): AForm("robotomy request", 72, 45), target(_target){
    std::cout << "RobotomyRequestForm paramater constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &cpy_asy){
    std::cout << "RobotomyRequestForm calling copy assignment" << std::endl;
    (void)cpy_asy;
    return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy_cons){
    std::cout << "RobotomyRequestForm calling copy constructor" << std::endl;   
    *this = cpy_cons;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else {
        static int chance = 0;
        if (chance % 2)
        {
            std::cout << "dzzzzzpzzzzznzzzzfzzzzzzbzzzzzzzzznnn n n" << std::endl;
            std::cout << this->target << " has been robotomized successfuly" << std::endl;
        }
        else
        {
            std::cout << "robotomy failed" << std::endl;
        }
        chance++;
    }
}
