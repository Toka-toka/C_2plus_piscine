#include "PhoneBook.hpp"

int main()
{    
	std::string input;

	PhoneBook MyPhoneBook;
	std::cout << "Hello, this is a crappy awesome phonebook software\n";
	sleep(1);
	while (1)
	{
		std::cout << "Please enter one of the following command: ADD, SEARCH, EXIT\n->";
		std::cin >> input;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767,'\n');
			continue;
		}
		else if (input == "EXIT")
			break;
		else if (input == "ADD")
			MyPhoneBook.add();
		else if (input == "SEARCH")
			MyPhoneBook.out();
		else
			std::cout << '"' << input << '"' << " is not a command, try againg\n";
	}
	std::cout << "Good bye\n";;
	return(0);
}