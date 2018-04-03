/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:24:02 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/03 14:51:29 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

public:

	RobotomyRequestForm( void );
	RobotomyRequestForm(std::string const target);
	RobotomyRequestForm( RobotomyRequestForm const & src );
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &operator=( RobotomyRequestForm const & rhs );

	void	execute(Bureaucrat const & executor) const;
};

#endif
