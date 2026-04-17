/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:41:22 by kadferna          #+#    #+#             */
/*   Updated: 2026/04/17 23:29:30 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../INCLUDES/Brain.hpp"

Brain::Brain( void ) {
    std::cout << "Brain was created with the default constructor!" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    *this = copy;
    std::cout << "Brain copy constructor called." << std::endl; 
}

Brain::~Brain()
{
    std::cout << "Brain destructor called." << std::endl;
}

Brain& Brain::operator=(Brain const &copy)
{
    std::copy(copy._ideas, copy._ideas + 100, this->_ideas);
    std::cout << "Assignment operator for Brain called." << std::endl;
    return (*this);
}

std::string const &Brain::getIdea(int const &index) const
{
    if (index >= 0 && index < 100)
        return (this->_ideas[index]);
    return (this->_ideas[0]);
}

void Brain::setIdea(std::string const &idea, int const &index) 
{
    if (index >= 0 && index < 100)
        this->_ideas[index] = idea;
}