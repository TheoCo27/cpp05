/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphco <raphco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 00:37:23 by raphco            #+#    #+#             */
/*   Updated: 2025/03/26 06:44:27 by raphco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private: 
        std::string _target;
        virtual void DoYourThing();
    public:
        //member functiuns

};