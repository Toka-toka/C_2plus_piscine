#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat oleg(100, "oleg");
/*	Form *letter[6];
	int grade_sing[6] = {100, 50, 100, 160, 100, 0};
	int grade_exec[6] = {100, 100, 160, 100, 0, 100};
	std::string name[6] = {"letter1", "letter2", "letter3", "letter4", "letter5", "letter6"};
	for (int i = 0 ; i < 6 ; i++)
	{
		try
		{
			letter[i] = new Form(name[i], grade_sing[i], grade_exec[i]);
			std::cout << *letter[i];
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	for (int i = 0 ; i < 2 ; i++)
	{
		try
		{
			oleg.signForm(*letter[i]);
			std::cout << *letter[i];
			oleg.signForm(*letter[i]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	delete letter[0];
	delete letter[1];*/
	return (0);
}
