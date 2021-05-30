#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, std::string name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
	_name = name;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->getName() << " goes home...\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	_grade = copy._grade;
	_name = copy._name;
	return (*this);
}

std::string const & Bureaucrat::getName() const
{
	return(_name);
}

int Bureaucrat::getGrade() const
{
	return(_grade);
}

void Bureaucrat::upGrade()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::downGrade()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void	Bureaucrat::signForm(Form &form)
{
	if(form.beSigned(*this) == 0)
		std::cout << "Bureaucrat " << _name << " signs form (" << form.getName() << ")\n";
	else
		std::cout << "Bureaucrat " << _name << " cannot sing form (" << form.getName() << ") because it allready signed\n";
}

const char* Bureaucrat::GradeTooHighException::what() const noexcept
{
	return("Exception: grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const noexcept
{
	return("Exception: grade is too low");
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return(out);
}