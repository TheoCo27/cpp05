/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 00:37:39 by raphco            #+#    #+#             */
/*   Updated: 2025/06/28 02:20:38 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include "fstream"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
        void DoYourThing() const;
    public:
        //constructor
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm &copy);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm &copy);
        virtual ~ShrubberyCreationForm();
        std::string get_target(void);
        //exception
        class FileException : public std::exception
        {
            virtual const char* what() const throw();
        };
    
};