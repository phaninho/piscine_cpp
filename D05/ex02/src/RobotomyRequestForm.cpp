/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:38:52 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/03 15:21:02 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("No name", 0, 72, 45)
{ }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 0, 72, 45)
{ }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{ }

RobotomyRequestForm &RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if (this != &rhs)
	 	*this = rhs;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
			srand(time(0));
			int rnd = rand() % 2;

			if (rnd == 1)
				std::cout << "bziing bziinng " << this->_name << " as been robotomized successfully" << std::endl;
			else
				std::cout << this->_name << " Robotomizing Failed !" << std::endl;
		}
	}
	catch (GradeTooLowException const & e)
	{
		std::cout << *this << std::endl;
	}
}
