#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
class Bureaucrat;
#include "Bureaucrat.hpp"

class Form
{
	private:
		bool _sing;
		const std::string _name;
		const int	_grade_sing;
		const int	_grade_exec;
		Form();
		Form &operator=(const Form &copy);		
	public:
		Form(const std::string name, const int grade_sing, const int	grade_exec);
		Form(const Form &copy);
		~Form();

		std::string const & getName() const;
		int getGradeSing() const;
		int getGradeExec() const;
		int getStatus() const;

		bool beSigned(const Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;
		
		class GradeTooHighException: public std::exception
		{
			const char* what() const noexcept;
		};
		class GradeTooLowException: public std::exception
		{
			const char* what() const noexcept;
		};
};

std::ostream &operator<<(std::ostream &out, Form const &form);
#endif