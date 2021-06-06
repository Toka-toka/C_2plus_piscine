#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
class Form;
#include "Form.hpp"

class Bureaucrat
{
	private:
		int _grade;
		std::string _name;
		Bureaucrat();
	public:
		Bureaucrat(int grade, std::string name);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &copy);
		std::string const & getName() const;
		int getGrade() const;
		void upGrade();
		void downGrade();
		
		void	signForm(Form &form);

		class GradeTooHighException: public std::exception 
		{
			const char* what() const noexcept;
		};
		class GradeTooLowException: public std::exception 
		{
			const char* what() const noexcept;
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif
