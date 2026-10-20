/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 13:12:01 by kadferna          #+#    #+#             */
/*   Updated: 2026/09/11 13:13:46 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
    // std::cout << "Default constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{

    std::cout << "Constructor called\n";

    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
    // std::cout << "Copy constrictor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    // std::cout << "Copy assignment operator called" << std::endl;

    if (this != &other)
        _grade = other._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    // std::cout << "Destructor called" << std::endl;
}

// Member Functions

std::string Bureaucrat::getName(void) const
{
    return (_name);
}

int Bureaucrat::getGrade(void) const
{
    return (_grade);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &other)
{
    os << other.getName() << ", bureaucrat grade " << other.getGrade() << ".";
    return os;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->_name << " couldn't sign " << form.getName()
                  << " because " << e.what() << "." << std::endl;
    }
}

void Bureaucrat::incrementGrade(void)
{
    if (_grade <= 1)
        throw GradeTooHighException();
    _grade--;
}
void Bureaucrat::decrementGrade(void)
{
    if (_grade >= 150)
        throw GradeTooLowException();
    _grade++;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("Grade too low");
}
