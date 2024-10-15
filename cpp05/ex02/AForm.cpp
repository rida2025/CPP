/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:20:25 by mel-jira          #+#    #+#             */
/*   Updated: 2024/06/25 10:53:20 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("default_name"), sign(false), grade_to_sign(150), grade_to_execute(150){
    std::cout << "AForm default constructor was called" << std::endl;
}

AForm::AForm(std::string _name, const int _grade_to_sign, const int _grade_to_execute): name(_name), sign(false), grade_to_sign(_grade_to_sign), grade_to_execute(_grade_to_execute){
    std::cout << "AForm paramater constructor was called" << std::endl;
    if (_grade_to_sign < 1 || _grade_to_execute < 1){
        throw GradeTooHighException();
    }
    else if (_grade_to_sign > 150 || _grade_to_execute > 150){
        throw GradeTooLowException();
    }
}

AForm::~AForm(){
    std::cout << "AForm destructor was called" << std::endl;
}

AForm &AForm::operator=(AForm const &copy_asy){
    std::cout << "AForm calling copy assignment" << std::endl;
    (void)copy_asy;
    return (*this);
}

AForm::AForm(AForm const &copy_cons): name(copy_cons.name), sign(copy_cons.sign), grade_to_sign(copy_cons.grade_to_sign), grade_to_execute(copy_cons.grade_to_execute){
    std::cout << "calling copy constructor" << std::endl;
}

std::string AForm::getName() const{
    return (name);
}

bool AForm::getSign() const{
    return (sign);
}

int AForm::getGradeToSign() const{
    return (grade_to_sign);
}

int AForm::getGradeToExecute() const{
    return (grade_to_execute);
}

const char* AForm::GradeTooHighException::what(void) const throw()
{
    return "Grade too High";
}

const char* AForm::GradeTooLowException::what(void) const throw()
{
    return "Grade too Low";
}

const char* AForm::FormNotSignedException::what(void) const throw()
{
    return "Form Not Signed";
}

void AForm::beSigned(Bureaucrat &obj){
    if (obj.getGrade() <= this->grade_to_sign)
        this->sign = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream &out, AForm& obj)
{
    out << "AForm details:" << std::endl;
    out << "AForm name: " << obj.getName() << std::endl;
    out << "AForm sign: ";
    if (obj.getSign())
        out << "(yes)" << std::endl;
    else
        out << "(no)" << std::endl;
    out << "grade to sign: " << obj.getGradeToSign() << std::endl;
    out << "grade to execute: " << obj.getGradeToExecute() << std::endl;
    return (out);
}