/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphco <raphco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:17:27 by raphco            #+#    #+#             */
/*   Updated: 2025/03/24 22:43:57 by raphco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//constructors
AForm::AForm(): _Name("AForm"), _signed(0), _GtoSign(150), _GtoEx(150)
{

}


AForm::AForm(AForm &copy): _Name(copy._Name), _signed(copy._signed), _GtoSign(copy._GtoSign), _GtoEx(copy._GtoEx)
{

}

AForm &AForm::operator=(AForm &copy)
{
    if (this != &copy)
    {
        this->_signed = copy._signed;
    }
    return (*this);
}


AForm::AForm(const std::string name, const int GtoSign, const int GtoEx) : _Name(name), _signed(0), _GtoSign(GtoSign), _GtoEx(GtoEx)
{

}
AForm::~AForm()
{

}

//getters
std::string AForm::GetName() const
{
    return(this->_Name);
}

bool AForm::GetSigned() const
{
    return(this->_signed);
}

int AForm::Get_GtoSign() const
{
    return (this->_GtoSign);
}

int AForm::Get_GtoEx() const
{
    return (this->_GtoEx);
}

//memebers functions
void AForm::beSigned(Bureaucrat &signer)
{
    if (signer.getGrade() > _GtoSign)
        throw GradeTooLowException();
    else
        this->_signed = 1;
}
// Exceptions

const char *AForm::GradeTooHighException:: what() const throw()
{
    return ("Grade too High !");
}


const char *AForm::GradeTooLowException:: what() const throw()
{
    return ("Grade too low !");
}

std::ostream &operator<<(std::ostream &stream, AForm &other)
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
