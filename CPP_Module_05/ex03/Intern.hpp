/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 01:59:37 by lalwafi           #+#    #+#             */
/*   Updated: 2025/08/31 19:34:23 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &copy);
		Intern &operator=(const Intern &b);
		~Intern();

		AForm	*createShrub(std::string const target);
		AForm	*createRobot(std::string const target);
		AForm	*createPresident(std::string const target);
		AForm	*makeForm(std::string form, std::string target);

		class UnknownFormException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif