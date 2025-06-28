/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphco <raphco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:42:27 by raphco            #+#    #+#             */
/*   Updated: 2025/03/25 01:10:46 by raphco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string _Name;
        bool _signed;
        const int _GtoSign;
        const int _GtoEx;
        virtual void DoYourThing() const = 0;
    public:
        //constructors
        AForm();
        AForm(AForm &copy);
        AForm &operator=(AForm &copy);
        AForm(const std::string name, const int GtoSign, const int GtoEx);
        virtual ~AForm();
        //getters
        std::string GetName() const;
        bool GetSigned() const;
        int Get_GtoSign() const;
        int Get_GtoEx() const;
        //memebers functions
        void SetSigned(bool status);
        void beSigned(Bureaucrat &signer);
        void execute(Bureaucrat const & executor) const;
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
		class NotSignedForm : public std::exception
		{
			public:

				virtual const char *what() const throw();
		};

};

std::ostream &operator<<(std::ostream &stream, AForm &other);