/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:27:05 by mel-jira          #+#    #+#             */
/*   Updated: 2024/05/01 17:43:15 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        virtual ~Cure();
        Cure& operator=(Cure const& cpyasy);
        Cure(Cure const& cpycons);

        void use(ICharacter& target);
        AMateria* clone() const;
};

#endif
