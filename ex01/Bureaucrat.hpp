/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphco <raphco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 22:08:01 by tcohen            #+#    #+#             */
/*   Updated: 2025/03/24 22:38:42 by raphco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"

class Form;

//Need to implmenet exeption for grade too high or grade too low 
//Need to implmenet increment and decrement operator for grade
//need to implmeent the overload operator to print stuff 

class Bureaucrat
{
	private:
		const std::string	_Name;
		int					_Grade;

	public:
		//constructor
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat &copy);
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat(void);
		//memeber functiuns
		void incrementGrade(void);
		void decrementGrade(void);
		std::string getName() const;
		int getGrade() const;
		void signForm(Form &form);
		// Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:

				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &other);