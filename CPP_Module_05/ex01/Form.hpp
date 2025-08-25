/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 19:24:37 by lalwafi           #+#    #+#             */
/*   Updated: 2025/08/25 20:39:48 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string.h>
# include <cstdlib>
# include <cctype>
# include <cmath>

# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;
	public:
		Form();
		Form(const std::string name, const int gradetosign, const int gradetoexec);
		Form(const Form &copy);
		~Form();
		
		const std::string	getName() const;
		bool				getSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;
		void				signIt(const Bureaucrat &b);
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		
};

std::ostream &operator<<(std::ostream &os, const Form &f);

#endif