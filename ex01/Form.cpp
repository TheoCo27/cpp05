/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphco <raphco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:17:27 by raphco            #+#    #+#             */
/*   Updated: 2025/03/24 22:43:57 by raphco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//constructors
Form::Form(): _Name("Form"), _signed(0), _GtoSign(150), _GtoEx(150)
{

}


Form::Form(Form &copy): _Name(copy._Name), _signed(copy._signed), _GtoSign(copy._GtoSign), _GtoEx(copy._GtoEx)
{

}

Form &Form::operator=(Form &copy)
{
    if (this != &copy)
    {
        this->_signed = copy._signed;
    }
    return (*this);
}


Form::Form(const std::string name, const int GtoSign, const int GtoEx) : _Name(name), _signed(0), _GtoSign(GtoSign), _GtoEx(GtoEx)
{

}
Form::~Form()
{

}

//getters
std::string Form::GetName() const
{
    return(this->_Name);
}

bool Form::GetSigned() const
{
    return(this->_signed);
}

int Form::Get_GtoSign() const
{
    return (this->_GtoSign);
}

int Form::Get_GtoEx() const
{
    return (this->_GtoEx);
}

//memebers functions
void Form::beSigned(Bureaucrat &signer)
{
    if (signer.getGrade() > _GtoSign)
        throw GradeTooLowException();
    else
        this->_signed = 1;
}
// Exceptions

const char *Form::GradeTooHighException:: what() const throw()
{
    return ("Grade too High !");
}


const char *Form::GradeTooLowException:: what() const throw()
{
    return ("Grade too low !");
}

std::ostream &operator<<(std::ostream &stream, Form &other)
{
    stream << "My Form name is " << other.GetName() << " ";
    if (other.GetSigned())
        stream << "And I have been signed" << std::endl;
    else
        stream << "And I haven't been signed" << std::endl;
    stream << "Grade required to sign me is " << other.Get_GtoSign() 
            << " and grade required to execute me is " << other.Get_GtoEx() << std::endl;
    return(stream);
}
