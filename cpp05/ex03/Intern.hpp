/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:51:36 by mel-jira          #+#    #+#             */
/*   Updated: 2024/06/28 09:58:44 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern
{
	private:
		AForm* makePresidentialPardonForm(const std::string& target);
		AForm* makeRobotomyRequestForm(const std::string& target);
		AForm* makeShrubberyCreationForm(const std::string& target);
	
	public:
		Intern();
		~Intern();
		Intern(Intern const &cpy_cons);
		Intern &operator=(Intern const &copy_asy);

		AForm *makeForm(std::string form_name, std::string target_form);
		class FormDoesNotExistException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

#endif
