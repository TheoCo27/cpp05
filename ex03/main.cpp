/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 22:08:05 by tcohen            #+#    #+#             */
/*   Updated: 2025/06/28 17:37:27 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    srand(time(NULL));
    
    Intern  someRandomIntern;
    AForm*   rrf;
    Bureaucrat chips("theo", 1);
    try
    {
        rrf = someRandomIntern.makeForm("robotoma request", "Bender");
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    chips.signForm(*rrf);
    chips.executeForm(*rrf);
    delete rrf;
}