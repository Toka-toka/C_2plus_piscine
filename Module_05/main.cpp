#include "Bureaucrat.hpp"

int		main(void)
{	
	Bureaucrat *oleg;
	Bureaucrat *vlad;
	Bureaucrat *den;
	
	try
	{
		oleg = new Bureaucrat(1, "Oleg");
		std::cout << *oleg << "\n";
		vlad = new Bureaucrat(150, "Vlad");
		std::cout << *vlad << "\n";
		den = new Bureaucrat(-1, "Denis");
		std::cout << *den << "\n";
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
	try
	{
		std::cout << "Try to upgrade Oleg\n";
		oleg->upGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
	try
	{
		std::cout << "Try to downgrade Vlad\n";
		vlad->downGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}	
	std::cout << *oleg << "\n";
	std::cout << *vlad << "\n";
	return (0);
}