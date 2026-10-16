/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:53:34 by kadferna          #+#    #+#             */
/*   Updated: 2026/10/16 12:25:56 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Constructors

AForm::AForm() : _name("default"), _isSigned(false), _signGrade(30), _executeGrade(60)
{
    std::cout << "AForm: default constructor called.\n";
};

AForm::AForm(std::string const &name, int const &singGrade, int const &execGrade) : _name(name), _isSigned(false), _signGrade(singGrade), _executeGrade(execGrade)
{
    std::cout << "AForm: constructor called\n";

    if (this->_signGrade < 1)
        throw(AForm::GradeTooHighException());
    else if (this->_signGrade > 150)
        throw(AForm::GradeTooLowException());
    if (this->_executeGrade < 1)
        throw(AForm::GradeTooHighException());
    else if (this->_executeGrade > 150)
        throw(AForm::GradeTooLowException());
};

AForm::AForm(AForm const &other) : _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _executeGrade(other._executeGrade)
{

    std::cout << "AForm: Copy constructor called\n";
}

AForm &AForm::operator=(const AForm &other)
{
    std::cout << "AForm: Copy assignment operator called\n";
    this->_isSigned = other._isSigned;
    return (*this);
}

AForm::~AForm()
{
    std::cout << "AForm: Destructor called\n";
}

// Member Function

std::string const &AForm::getName(void) const
{
    return (this->_name);
};

int const &AForm::getSignGrade(void) const
{
    return (this->_signGrade);
};

int const &AForm::getExecGrade(void) const
{
    return (this->_executeGrade);
};

bool const &AForm::getIsSigned(void) const
{
    return (this->_isSigned);
};

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_signGrade)
        throw(AForm::GradeTooLowException());
    else
        this->_isSigned = true;
}

// Exceptions

char const *AForm::GradeTooHighException::what(void) const throw()
{
    return ("Grade is too high");
}

char const *AForm::GradeTooLowException::what(void) const throw()
{
    return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &os, AForm const &form)
{
    return (os << form.getName() << " form, signed: " << form.getIsSigned() << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade());
}