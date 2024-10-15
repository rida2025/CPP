/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:59:45 by mel-jira          #+#    #+#             */
/*   Updated: 2024/05/02 11:48:03 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character: public ICharacter
{
    private:
        std::string _name;
        int         num_item;
        AMateria*   garbage_collector[1024];
        AMateria*   inventory[4];
    public:
        Character();
        Character(std::string name);
        virtual ~Character();
        Character &operator=(Character const &cpyasy);
        Character(Character const &cpycons);

        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

        virtual void free_garbage_collector();
};

#endif
