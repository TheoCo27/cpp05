/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 00:37:33 by raphco            #+#    #+#             */
/*   Updated: 2025/06/28 01:17:03 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <random>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
        void DoYourThing() const;
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& copy);
    ~RobotomyRequestForm();
    RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
    //exception
    class RobotizationFailed : public std::exception
    {
        public: 
            virtual const char *what() const throw();
    };
};
