/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:00:01 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/24 14:54:25 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTAP_HPP
# define DIAMONDTAP_HPP

# include "FragTrap.hpp"


class DiamondTrap : virtual public FragTrap , virtual public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap &operator=(DiamondTrap const &cpyasy);
        DiamondTrap(DiamondTrap const &cpycons);

        void whoAmI();
        void attack(const std::string& target);
};

#endif
