#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string name): Form::Form(name, 25, 5)
{
//	Form::Form(const std::string name, const int grade_sing, const int grade_exec): _name(name), _grade_sing(grade_sing), _grade_exec(grade_exec)
//	Required grades: sign 25, exec 5
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form(copy)
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{

}