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

#include "Form.hpp";

// Constructors

Form::Form() : _name("default"), _isSigned(false), _signGrade(30), _executeGrade(60)
{
    std::cout << "Form: default constructor called.\n";
};

Form::Form(std::string const &name, int const &singGrade, int const &execGrade) : _name(name), _isSigned(0), _signGrade(singGrade), _executeGrade(execGrade)
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
    *this = other;
}
