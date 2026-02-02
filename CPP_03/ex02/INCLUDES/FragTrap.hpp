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

# include "../INCLUDES/ScavTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap(std::string name);
        ~FragTrap();
        void highFiveGuys( void );
};