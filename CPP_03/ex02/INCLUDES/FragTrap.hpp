/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:07:04 by kadferna          #+#    #+#             */
/*   Updated: 2026/02/02 13:45:28 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

# include "../INCLUDES/ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap( void );
        FragTrap(std::string const &_name);
        FragTrap(FragTrap const &copy);
        FragTrap& operator=(const FragTrap &other);
        ~FragTrap();

        // Member function
        void highFiveGuys( void );
};

std::ostream& operator<<(std::ostream& os, const FragTrap& claptrap);

#endif