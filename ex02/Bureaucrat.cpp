/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphco <raphco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 22:07:56 by tcohen            #+#    #+#             */
/*   Updated: 2025/03/26 07:48:22 by raphco           ###   ########.fr       */
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

void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << "Bureraucrat " << this->_Name << " signed form " << form.GetName() << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << "Bureraucrat " << this->_Name << " couldn't sign form " << form.GetName() << " because " << e.what() << '\n';
    }    
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << "Bureaucrat " << this->_Name << " succesfully executed form " << form.GetName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Form " << form.GetName() << " cannot be executed by " << this->_Name << 
                " because "<< e.what() << '\n';
    }

    
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