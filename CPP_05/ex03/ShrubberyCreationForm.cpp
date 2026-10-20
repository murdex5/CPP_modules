/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:56:05 by kadferna          #+#    #+#             */
/*   Updated: 2026/10/19 14:04:58 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm::AForm("ShrubberyCreationForm", 145, 137), _target("null")
{
    std::cout << "ShrubberyCreationForm: Default constructor called\n";
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm::AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm: Constructor called\n";
};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm::AForm(other), _target(other._target)
{
    std::cout << "ShrubberyCreationForm: Copy constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm: Destructor called\n";
}

ShrubberyCreationForm const &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    std::cout << "ShrubberyCreationForm: Copy operator constructor called\n";
    AForm::operator=(other);
    this->_target = other._target;
    return (*this);
}

// Member Function

void ShrubberyCreationForm::beExecuted(const Bureaucrat &bureaucrat) const
{
    std::ofstream outfile;

    outfile.open((this->_target + "_shrubbery").c_str());
    if (outfile.fail())
    {
        std::cout << "Could not open output file\n";
        return;
    }
    outfile << TREE;
    outfile.close();
    std::cout << bureaucrat.getName() << " successfully create a shrubbery\n";
}

std::ostream &operator<<(std::ostream &str, ShrubberyCreationForm const &form)
{
    return (str << form.getName() << " form, signed: " << form.getIsSigned() << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade());
}