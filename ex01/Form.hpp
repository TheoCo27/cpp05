/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphco <raphco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:42:27 by raphco            #+#    #+#             */
/*   Updated: 2025/03/24 22:34:14 by raphco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string _Name;
        bool _signed;
        const int _GtoSign;
        const int _GtoEx;
    public:
        //constructors
        Form();
        Form(Form &copy);
        Form &operator=(Form &copy);
        Form(const std::string name, const int GtoSign, const int GtoEx);
        ~Form();
        //getters
        std::string GetName() const;
        bool GetSigned() const;
        int Get_GtoSign() const;
        int Get_GtoEx() const;
        //memebers functions
        void beSigned(Bureaucrat &signer);
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

std::ostream &operator<<(std::ostream &stream, Form &other);