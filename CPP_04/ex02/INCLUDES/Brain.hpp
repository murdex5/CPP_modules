/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:39:47 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/17 23:31:40 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

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
        const std::string &getIdea(int const &index) const;
        void    setIdea(std::string const &idea, int const &index);
};

std::ostream &operator<<(std::ostream& os, const Brain& brain);

#endif