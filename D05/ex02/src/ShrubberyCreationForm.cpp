/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:44:01 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/02 14:55:20 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
Form("No Name", 0, 145, 137),
_target("No target")
{ }

ShrubberyCreationForm::ShrubberyCreationForm(std::string const taget) :
Form(target, 0, 145, 137),
{ }

ShrubberyCreationForm::ShrubberyCreationForm(void)
{ }
