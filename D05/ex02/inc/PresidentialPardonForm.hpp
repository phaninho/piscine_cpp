/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:03:36 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/03 15:17:20 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

public:

	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string const name );
	PresidentialPardonForm( PresidentialPardonForm const & src );
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &operator=( PresidentialPardonForm const & rhs );

	void	execute(Bureaucrat const & executor) const;

};

#endif
