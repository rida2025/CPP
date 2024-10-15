/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:27:09 by mel-jira          #+#    #+#             */
/*   Updated: 2024/05/01 18:52:17 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice& operator=(Ice const& cpyasy);
        Ice(Ice const& cpycons);

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
