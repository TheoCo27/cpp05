/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 22:08:05 by tcohen            #+#    #+#             */
/*   Updated: 2025/06/28 02:22:11 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    srand(time(NULL));
    
    Bureaucrat Scott;
    PresidentialPardonForm f1;
    RobotomyRequestForm f2("chips");
    ShrubberyCreationForm f3("blue");

    try
    {
        Scott.signForm(f1);
        Scott.signForm(f2);
        Scott.signForm(f3);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Scott.executeForm(f1);
        Scott.executeForm(f2);
        Scott.executeForm(f3);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    Bureaucrat Pilgrim("Pilgrim", 1);
    try
    {
        Pilgrim.signForm(f1);
        Pilgrim.executeForm(f1);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Pilgrim.signForm(f3);
        Pilgrim.executeForm(f3);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Pilgrim.signForm(f2);
        Pilgrim.executeForm(f2);
        Pilgrim.executeForm(f2);
        Pilgrim.executeForm(f2);
        Pilgrim.executeForm(f2);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << f1;
    std::cout << f2;
    std::cout << f3;
}