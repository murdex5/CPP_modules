/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:56:48 by kadferna          #+#    #+#             */
/*   Updated: 2026/10/17 02:27:36 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

// Constructors

PresidentialPardonForm::PresidentialPardonForm() : AForm::AForm("PresidentialPardonForm", 25, 5), _target("null") {}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm::AForm("PresidentialPardonForm", 25, 5), _target(target) {};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : AForm::AForm(other), _target(other._target) {};

PresidentialPardonForm::~PresidentialPardonForm() {};

PresidentialPardonForm const &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    AForm::operator=(other);
    this->_target = other._target;
    return (*this);
};

// Member Functions

void PresidentialPardonForm::beExecuted(const Bureaucrat &bureaucrat) const
{
    (void)bureaucrat;
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebro\n";
}

std::ostream &operator<<(std::ostream &str, PresidentialPardonForm const &form)
{
    return (str << form.getName() << " form, signed: " << form.getIsSigned() << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade());
}