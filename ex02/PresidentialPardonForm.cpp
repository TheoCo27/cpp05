/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 00:37:23 by raphco            #+#    #+#             */
/*   Updated: 2025/06/28 00:51:16 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

    //constructor 
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{

}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
    *this = copy;
}
PresidentialPardonForm::~PresidentialPardonForm()
{

}
PresidentialPardonForm& PresidentialPardonForm:: operator=(const PresidentialPardonForm &copy)
{
    if (this == &copy)
        return (*this);
    _target = copy._target;
    this->SetSigned(copy.GetSigned());
    return(*this);
}
void PresidentialPardonForm::DoYourThing() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;		

}