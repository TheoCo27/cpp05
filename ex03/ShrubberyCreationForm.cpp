/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 00:37:36 by raphco            #+#    #+#             */
/*   Updated: 2025/06/28 02:21:00 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy)
{
    *this = copy;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &copy)
{
    if (this == &copy)
        return(*this);
    this->SetSigned(copy.GetSigned());
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::DoYourThing() const
{
    std::ofstream outfile((_target + std::string("_shrubbery")).c_str());

	if (outfile)
	{
        outfile << "        &&& &&  & &&" << std::endl;
        outfile << "      && &/|&|& ()|/ @, &&" << std::endl;
        outfile << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
        outfile << "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
        outfile << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
        outfile << "&&   && & &| &| /& & % ()& /&&" << std::endl;
        outfile << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
        outfile << "     &&     \\|||" << std::endl;
        outfile << "             |||" << std::endl;
        outfile << "             |||" << std::endl;
        outfile << "             |||" << std::endl;
        outfile << "       , -=-~  .-^- _" << std::endl;
		outfile.close();
	}
	else
		throw (FileException());
}

std::string ShrubberyCreationForm::get_target(void)
{
    return (_target);
}
const char* ShrubberyCreationForm::FileException::what() const throw()
{
    return ("Couldn't open and write the file");
}
    