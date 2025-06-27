/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 00:37:39 by raphco            #+#    #+#             */
/*   Updated: 2025/06/28 00:40:06 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
        virtual void DoYourThing();
    public:
        //constructor
        ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm &copy);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm &copy);
        virtual ~ShrubberyCreationForm();
    
};