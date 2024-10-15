/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:48:07 by mel-jira          #+#    #+#             */
/*   Updated: 2024/06/28 11:03:42 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target): AForm("presidential pardon", 25, 5), target(_target){
    std::cout << "PresidentialPardonForm paramater constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &cpy_asy){
    std::cout << "PresidentialPardonForm calling copy assignment" << std::endl;
    (void)cpy_asy;
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy_cons){
    std::cout << "PresidentialPardonForm calling copy constructor" << std::endl;
    *this = cpy_cons;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else {
        std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}
