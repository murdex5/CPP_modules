/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:55:30 by kadferna          #+#    #+#             */
/*   Updated: 2026/10/28 12:38:48 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"

#define TREE "          &&& &&  & &&\n      && &\\/&\\|& ()|/ @, &&\n      &\\/(/&/&||/& /_/)_&/_&\n   &() &\\/&|()|/&\\/ '%\" & ()\n  &_\\_&&_\\ |& |&&/&__%_/_& &&\n&&   && & &| &| /& & % ()& /&&\n ()&_---()&\\&\\|&&-&&--%---()~\n     &&     \\|||\n             |||\n             |||\n             |||\n       , -=-~  .-^- _\n"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
private:
    std::string _target;

public:
    /* Constructors and Destructors */
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm(ShrubberyCreationForm const &other);
    ~ShrubberyCreationForm(void);

    /* Operators */
    ShrubberyCreationForm const &operator=(ShrubberyCreationForm const &other);

    /* Member fucntions */
    void beExecuted(Bureaucrat const &bureaucrat) const;
};

std::ostream &operator<<(std::ostream &str, ShrubberyCreationForm const &form);

#endif