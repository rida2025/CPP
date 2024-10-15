/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:29:58 by mel-jira          #+#    #+#             */
/*   Updated: 2024/05/03 17:30:39 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain *ptr;
    public:
        Cat();
        virtual ~Cat();
        Cat &operator=(Cat const &cpyasy);
        Cat(Cat const &cpycons);
        void makeSound() const;
};

#endif
