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

Form::Form() : _name("default"), _is_signed(false), _sign_grade(150), _execute_grade(150) {};

Form::Form(const std::string name, const int sign_grade, const int execute_grade) : _name(name), _is_signed(false), _sign_grade(sign_grade), _execute_grade(execute_grade) {};
