/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:30:03 by mel-jira          #+#    #+#             */
/*   Updated: 2024/05/03 17:30:35 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain *ptr;
    public:
        Dog();
        virtual ~Dog();
        Dog &operator=(Dog const &cpyasy);
        Dog(Dog const &cpycons);
        void makeSound() const;
};

#endif
