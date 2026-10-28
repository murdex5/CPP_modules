/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:56:27 by kadferna          #+#    #+#             */
/*   Updated: 2026/10/28 10:45:47 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

// Constructors

RobotomyRequestForm::RobotomyRequestForm() : AForm::AForm("RobotomyRequestForm", 72, 45), _target("null")
{
    std::cout << "RobotomyRequestForm: Default constructor called" << std::endl;
    ;
};

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm::AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm: Constructor called" << std::endl;
    ;
};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm::AForm(other), _target(other._target)
{
    std::cout << "RobotomyRequestForm: Copy constructor called" << std::endl;
    ;
};

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm: Destructor called" << std::endl;
    ;
};

RobotomyRequestForm const &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "RobotomyRequestForm: Copy operator constructor called" << std::endl;
    ;
    AForm::operator=(other);
    this->_target = other._target;
    return (*this);
}

// Member Function

void RobotomyRequestForm::beExecuted(const Bureaucrat &bureaucrat) const
{
    int success;
    static bool seeded = false; // This was put to get real random time. Initialized once

    if (!seeded)
    {
        srand(static_cast<unsigned int>(time(NULL)));
        seeded = true;
    }
    success = rand() % 2;
    (void)bureaucrat;
    std::cout << "* BZZZZZ... DRRRRRR... *" << std::endl;
    if (success)
        std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
    else
        std::cout << this->_target << "'s robotomization failed" << std::endl;
};

std::ostream &operator<<(std::ostream &str, RobotomyRequestForm const &form)
{
    return (str << form.getName() << " form, signed: " << form.getIsSigned() << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade());
}