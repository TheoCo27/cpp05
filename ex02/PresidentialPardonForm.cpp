/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphco <raphco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 00:37:23 by raphco            #+#    #+#             */
/*   Updated: 2025/03/26 07:47:47 by raphco           ###   ########.fr       */
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
(void)copy;

}
PresidentialPardonForm::~PresidentialPardonForm()
{

}
PresidentialPardonForm& PresidentialPardonForm:: operator=(const PresidentialPardonForm &copy)
{
    (void)copy;
    return(*this);
}
void PresidentialPardonForm::DoYourThing() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;		

}