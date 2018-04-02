/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:41:13 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/02 14:55:30 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class ShrubberyCreationForm : public Form
{

public:

	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string const target );
	ShrubberyCreationForm( ShrubberyCreationForm const & src );
	virtual ~ShrubberyCreationForm();

	int		getGrade() const;
	ShrubberyCreationForm &			operator=( ShrubberyCreationForm const & rhs );

};
