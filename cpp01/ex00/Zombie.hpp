/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:20:11 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/02 23:21:14 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie();

        void    announce( void );
    private:
        std::string name;
        
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
