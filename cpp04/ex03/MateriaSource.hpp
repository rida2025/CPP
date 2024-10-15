/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:51:39 by mel-jira          #+#    #+#             */
/*   Updated: 2024/05/01 21:41:55 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *inventory[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource &operator=(MateriaSource const &cpyasy);
        MateriaSource(MateriaSource const &cpycons);
        
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
        
};
