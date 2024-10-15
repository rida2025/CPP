/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:20:25 by mel-jira          #+#    #+#             */
/*   Updated: 2024/06/28 09:37:34 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("default_name"), sign(false), grade_to_sign(150), grade_to_execute(150){
    std::cout << "default constructor was called" << std::endl;
}

Form::Form(std::string _name, const int _grade_to_sign, const int _grade_to_execute): name(_name), sign(false), grade_to_sign(_grade_to_sign), grade_to_execute(_grade_to_execute){
    std::cout << "paramater constructor was called" << std::endl;
    if (_grade_to_sign < 1 || _grade_to_execute < 1){
        throw GradeTooHighException();
    }
    else if (_grade_to_sign > 150 || _grade_to_execute > 150){
        throw GradeTooLowException();
    }
}

Form::~Form(){
    std::cout << "destructor was called" << std::endl;
}

Form &Form::operator=(Form const &copy_asy){
    std::cout << "calling copy assignment" << std::endl;
    (void)copy_asy;
    return (*this);
}

Form::Form(Form const &copy_cons): name(copy_cons.name), sign(copy_cons.sign), grade_to_sign(copy_cons.grade_to_sign), grade_to_execute(copy_cons.grade_to_execute){
    std::cout << "calling copy constructor" << std::endl;
}

std::string Form::get_name(){
    return (name);
}

bool Form::get_sign(){
    return (sign);
}

int Form::get_grade_to_sign(){
    return (grade_to_sign);
}

int Form::get_grade_to_execute(){
    return (grade_to_execute);
}

const char* Form::GradeTooHighException::what(void) const throw()
{
    return "Grade too High";
}

const char* Form::GradeTooLowException::what(void) const throw()
{
    return "Grade too Low";
}

void Form::beSigned(Bureaucrat &obj){
    if (obj.getGrade() <= this->grade_to_sign)
        this->sign = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream &out, Form& obj)
{
    out << "form details:" << std::endl;
    out << "form name: " << obj.get_name() << std::endl;
    out << "form sign: ";
    if (obj.get_sign())
        out << "(yes)" << std::endl;
    else
        out << "(no)" << std::endl;
    out << "grade to sign: " << obj.get_grade_to_sign() << std::endl;
    out << "grade to execute: " << obj.get_grade_to_execute() << std::endl;
    return (out);
}