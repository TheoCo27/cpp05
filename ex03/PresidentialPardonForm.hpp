/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 00:37:26 by raphco            #+#    #+#             */
/*   Updated: 2025/06/28 01:51:44 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"


class PresidentialPardonForm : public AForm
{
    private: 
        std::string _target;
        virtual void DoYourThing() const;
    public:
        //constructor 
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(const PresidentialPardonForm &copy);
};