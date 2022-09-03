#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string		target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		void		execute(Bureaucrat const & executor) const;
		~PresidentialPardonForm();
};


#endif