/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:39:39 by kadferna          #+#    #+#             */
/*   Updated: 2026/10/28 10:41:16 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

// Constructors

Intern::Intern(void)
{
    std::cout << "Intern: Constructor called" << std::endl;
}

Intern::Intern(const Intern &other)
{
    std::cout << "Intern: Copy constructor called" << std::endl;
    *this = other;
}

Intern &Intern::operator=(const Intern &other)
{
    std::cout << "Intern: assingment operator called" << std::endl;
    if (this == &other)
        return *this;

    // Nothing to copy here since intern has no variables
    return *this;
}

Intern::~Intern(void)
{
    std::cout << "Intern: Destructor called" << std::endl;
}

// Member functions
