#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(const std::string name);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();

		void execute(Bureaucrat const & executor);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
	private:
};
#endif
