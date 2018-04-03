/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:44:01 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/03 15:21:07 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
AForm("No Name", 0, 145, 137)
{ }

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
AForm(target, 0, 145, 137)
{ }

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src )
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{ }

ShrubberyCreationForm &ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
			std::ofstream ofile(this->_name + "_shrubbery");
			std::string buf = "testrwerew";
		    if (ofile.is_open() == false)
		    {
		      std::cout << "open file out failes" << std::endl;
		      return ;
		    }
		    else
			{
		      	ofile << " oxoxoo    ooxoo" << std::endl;
				ofile << "  ooxoxo oo  oxoxooo" << std::endl;
				ofile << " oooo xxoxoo ooo ooox" << std::endl;
				ofile << " oxo o oxoxo  xoxxoxo" << std::endl;
				ofile << "  oxo xooxoooo o ooo" << std::endl;
				ofile << "    ooo\\oo\\  /o/o" << std::endl;
				ofile << "        \\  \\/ /" << std::endl;
				ofile << "         |   /" << std::endl;
				ofile << "         |  |" << std::endl;
				ofile << "         | D|" << std::endl;
				ofile << "         |  |" << std::endl;
				ofile << "         |  |" << std::endl;
				ofile << "  ______/____\\____" << std::endl;
		  	}
		    ofile.close();
		}
	}
	catch (GradeTooLowException const & e)
	{
		std::cout << *this << std::endl;
	}
}
