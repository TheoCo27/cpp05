/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphco <raphco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 22:07:56 by tcohen            #+#    #+#             */
/*   Updated: 2025/03/24 20:10:19 by raphco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//constructor
Bureaucrat::Bureaucrat(void) : _Name("Michael Scott"), _Grade(150)
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _Name(copy._Name), _Grade(copy._Grade)
{

}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _Name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
        this->_Grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
    if (this != &copy)
    {
        // this->_Name = copy._Name;
        this->_Grade = copy._Grade;
    }
    return (*this);
}

Bureaucrat:: ~Bureaucrat(void)
{

}

//memeber functiuns
void Bureaucrat::incrementGrade(void)
{
    if (this->_Grade == 1)
        throw GradeTooHighException();
    else 
        this->_Grade--;
}

void Bureaucrat::decrementGrade(void)
{
    if (this->_Grade == 150)
        throw GradeTooLowException();
    else 
        this->_Grade++;
}

std::string Bureaucrat::getName() const
{
    return (this->_Name);
}

int Bureaucrat::getGrade() const
{
    return (this->_Grade);
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &other)
{
    stream << "My name is " << other.getName() << " and my grade is " << other.getGrade();
    return (stream);
}


// Exceptions
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}