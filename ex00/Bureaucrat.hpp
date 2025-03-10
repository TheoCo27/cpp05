/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphco <raphco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 22:08:01 by tcohen            #+#    #+#             */
/*   Updated: 2025/03/10 19:36:17 by raphco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

//Need to implmenet exeption for grade too high or grade too low 
//Need to implmenet increment and decrement operator for grade
//need to implmeent the overload operator to print stuff 

class Bureaucrat
{
	private:
		const std::string	_Name;
		int					_Grade;

	public:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat &copy);
		~Bureaucrat(void);
		void getName();
		void getGrade();
};

