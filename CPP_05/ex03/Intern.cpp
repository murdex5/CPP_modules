/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:39:39 by kadferna          #+#    #+#             */
/*   Updated: 2026/10/28 12:01:04 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

// Constructors

Intern::Intern()
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

Intern::~Intern()
{
    std::cout << "Intern: Destructor called" << std::endl;
}

// Static functions for makeForm

static AForm *makePresident(const std::string target)
{
    return (new PresidentialPardonForm(target));
}

static AForm *makeShrubbery(const std::string target)
{
    return (new ShrubberyCreationForm(target));
}

static AForm *makeRobotomy(const std::string target)
{
    return (new RobotomyRequestForm(target));
}

// Member functions -- no getters and setters cause no variables

AForm *Intern::makeForm(const std::string form_name, const std::string target)
{

    AForm *(*all_forms[])(const std::string target) = {&makePresident, &makeRobotomy, &makeShrubbery};

    std::string forms[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    for (int i = 0; i < 3; i++)
    {
        if (form_name == forms[i])
        {
            std::cout << "Intern creates " << form_name << " now" << std::endl;
            return (all_forms[i](target));
        }
    }
    std::cout << "Intern can not create a form called " << form_name << std::endl;
    return (NULL);
};
