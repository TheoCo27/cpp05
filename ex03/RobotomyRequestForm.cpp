/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 00:37:30 by raphco            #+#    #+#             */
/*   Updated: 2025/06/28 01:47:40 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default")
{
    
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
{
    *this = copy;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
    if (this == &copy)
        return (*this);
    this->_target = copy._target;
    this->SetSigned(copy.GetSigned());
    return(*this);
}

void RobotomyRequestForm::DoYourThing() const
{
    int random_nb = rand() % 2;

    if (random_nb == 1)
    {
        std::cout << "Drrrrr Drrrr " << _target << " has been successfully been robotomized" << std::endl;
    }
    else
        throw(RobotizationFailed());

}
const char *RobotomyRequestForm::RobotizationFailed::what() const throw()
{
    return ("Robotmy failed");
}

