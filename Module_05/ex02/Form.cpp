#include "Form.hpp"

Form::Form(const std::string name, const int grade_sing, const int grade_exec): _name(name), _grade_sing(grade_sing), _grade_exec(grade_exec)
{
	if (grade_sing > 150 || grade_exec > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade_sing < 1 || grade_exec < 1)
		throw Bureaucrat::GradeTooHighException();
	_sing = 0;
}

Form::~Form()
{
	std::cout << "The form began to burn and turned to ash\n";
}

Form::Form(const Form &copy): _name(copy._name), _grade_sing(copy._grade_sing), _grade_exec(copy._grade_exec)
{
}

std::string const & Form::getName() const
{
	return(_name);
}

int Form::getGradeSing() const
{
	return(_grade_sing);
}

int Form::getGradeExec() const
{
	return(_grade_exec);
}

int Form::getStatus() const
{
	return(_sing);
}

bool Form::beSigned(const Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrade() > _grade_sing)
		throw Bureaucrat::GradeTooLowException();
	if(_sing == 0)
	{
		_sing = 1;
		return(0);
	}
	return(1);
}

const char* Form::GradeTooHighException::what() const noexcept
{
	return("Exception: grade is too high");
}

const char* Form::GradeTooLowException::what() const noexcept
{
	return("Exception: grade is too low");
};

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << "Form (" << form.getName() << ") needs grades:" 
	<< form.getGradeSing() << " - for sing, " 
	<< form.getGradeExec() << " - for executed"
	<< ", current status:";
	if (form.getStatus() == 0)
		out << "not signed\n";
	else
		out << "signed\n";
	return(out);
}