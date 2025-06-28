/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 17:10:34 by theog             #+#    #+#             */
/*   Updated: 2025/06/28 17:36:58 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{

}
Intern::Intern(const Intern& copy)
{
    *this = copy;
}
Intern& Intern::operator=(const Intern& copy)
{
    (void)copy;
    return(*this);
}
Intern::~Intern()
{

}
//method
AForm* Intern::makeForm(std::string form_name, std::string target)
{
    std::string tab [] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    int i = 0;
    while(i < 3)
    {
        if (form_name == tab[i])
            break;
        i++;
    }
    switch (i)
    {
    case 0 :
        std:: cout << "Intern created form PresidentialPardonForm" << std::endl;
        return (new PresidentialPardonForm(target));
    case 1 :
        std:: cout << "Intern created form RobotmyRequestForm" << std::endl;
        return (new RobotomyRequestForm(target));
    case 2 : 
        std:: cout << "Intern created form ShruberryCreationForm" << std::endl;
        return (new ShrubberyCreationForm(target));
    default:
        throw(NoFormFound());
    }
}
//exeption
const char* Intern::NoFormFound:: what() const throw()
{
    return ("Intern cannot create form");
}