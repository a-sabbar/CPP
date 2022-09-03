#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
    this->target = target;
}


void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() <= 25 && executor.getGrade() <= 5)
    {
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox"<< std::endl;
	}
	else
		throw low_e;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
