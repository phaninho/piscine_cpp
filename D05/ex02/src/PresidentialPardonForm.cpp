/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:05:35 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/03 15:20:48 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
AForm("No name", 0, 25, 5)
{ }

PresidentialPardonForm::PresidentialPardonForm(std::string const target) :
AForm(target, 0, 25, 5)
{ }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{ }

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (this->getIsSigned() == false)
			std::cout <<this->_name << " Form is not signed !" << std::endl;
		else if (executor.getGrade() > this->getSignGradRequest() || \
		executor.getGrade() > this->getSignGradExec())
			throw GradeTooLowException();
		else
		{
			std::cout << this->_name << " as been pardoned by Zaphod Beeblebrox" << std::endl;
		}
	}
	catch (GradeTooLowException const & e)
	{
		std::cout << *this << std::endl;
	}
}
