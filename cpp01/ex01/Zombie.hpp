/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:20:11 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/02 23:43:16 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void    announce( void );
        void    set_name(std::string name);
    private:
        std::string name;
        
};

Zombie* zombieHorde(int N, std::string name);

#endif
