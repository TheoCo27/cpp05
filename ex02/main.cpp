/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphco <raphco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 22:08:05 by tcohen            #+#    #+#             */
/*   Updated: 2025/03/24 22:33:20 by raphco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat Scott;
    Form f1;
    Form f2("Impossible to sign", 0, 0);
    try
    {
        Scott.signForm(f1);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Scott.signForm(f2);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << f1;
    std::cout << f2;

}