/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:39:47 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/17 23:25:35 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class Brain 
{
    private:
        std::string _ideas[100];
    public:
        Brain(void);
        Brain(Brain const &copy);
        Brain& operator=(const Brain &other);
        ~Brain(void);

        // Getters & Setters
        std::string &get_idea(int const &index) const;
        void    set_idea(std::string const &idea, int const &index);
};

std::ostream &operator<<(std::ostream& os, const Brain& brain);

