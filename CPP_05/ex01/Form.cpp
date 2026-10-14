/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:52:30 by kadferna          #+#    #+#             */
/*   Updated: 2026/09/17 13:52:30 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors

Form::Form() : _name("default"), _isSigned(false), _signGrade(30), _executeGrade(60)
{
    std::cout << "Form: default constructor called.\n";
};

Form::Form(std::string const &name, int const &singGrade, int const &execGrade) : _name(name), _isSigned(false), _signGrade(singGrade), _executeGrade(execGrade)
{
    std::cout << "Fomr: constructor called\n";

    if (this->_signGrade < 1)
        throw(Form::GradeTooHighException());
    else if (this->_signGrade > 150)
        throw(Form::GradeTooLowException());
    if (this->_executeGrade < 1)
        throw(Form::GradeTooHighException());
    else if (this->_executeGrade > 150)
        throw(Form::GradeTooLowException());
};

Form::Form(Form const &other) : _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _executeGrade(other._executeGrade)
{

    std::cout << "Form: Copy constructor called\n";
}

Form &Form::operator=(const Form &other)
{
    std::cout << "Form: Copy assignment operator called\n";
    this->_isSigned = other._isSigned;
    return (*this);
}

Form::~Form()
{
    std::cout << "Form: Destructor called\n";
}

// Member Function

std::string const &Form::getName(void) const
{
    return (this->_name);
};

int const &Form::getSignGrade(void) const
{
    return (this->_signGrade);
};

int const &Form::getExecGrade(void) const
{
    return (this->_executeGrade);
};

bool const &Form::getIsSigned(void) const
{
    return (this->_isSigned);
};

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_signGrade)
        throw(Form::GradeTooLowException());
    else
        this->_isSigned = true;
}

// Exceptions

char const *Form::GradeTooHighException::what(void) const throw()
{
    return ("Grade is too high");
}

char const *Form::GradeTooLowException::what(void) const throw()
{
    return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
    return (os << form.getName() << " form, signed: " << form.getIsSigned() << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade());
}