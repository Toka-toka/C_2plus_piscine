#include <iostream>
#include <string>
#include <unistd.h>
#include <iomanip>

class Contact
{
	public:
		std::string info[11];
		int index;
};

class PhoneBook
{
	public:
		PhoneBook();
		void add();
		void out();
	private:
		Contact contacts[8];
		int     i;
		std::string info_field[11];
};

PhoneBook::PhoneBook()
{
	this->i = 0;
	this->info_field[0] = "first name";
	this->info_field[1] = "last name";
	this->info_field[2] = "nickname";
	this->info_field[3] = "login";
	this->info_field[4] = "postal address";
	this->info_field[5] = "email address";
	this->info_field[6] = "phone number";
	this->info_field[7] = "birthday date";
	this->info_field[8] = "favorite meal";
	this->info_field[9] = "underwear color";
	this->info_field[10] = "darkest secret";
}

void    print_line()
{
	for (int i = 0; i < 4; i++)
	{
		std::cout << "|----------";
	}
	std::cout << "|\n";
}

void PhoneBook::out()
{
	int index = -1;
	
	print_line();
	std::cout << "|" << std::setw(10) << "index";
	for (int i = 0; i < 3; i++)
		std::cout << "|" << std::setw(10) << this->info_field[i];
	std::cout << "|\n";
	for (int i = 0; i < this->i; i++)
	{
		print_line();
		std::cout << "|" << std::setw(10) << this->contacts[i].index + 1;
		for (int j = 0; j < 3; j++)
		{
			std::cout << "|";
			if (this->contacts[i].info[j].length() > 10)
    			std::cout << this->contacts[i].info[j].substr(0, 9) << ".";
			else
				std::cout << std::setw(10) << this->contacts[i].info[j];
		}
		std::cout << "|\n";
	}
	print_line();
	if (this->i != 0)
	{
		while (index < 0 || index > (this->i - 1))
		{
			std::cout << "Please enter the index of contact \n->";
			std::cin >> index;
			index--;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(32767,'\n');
				index = -1;
			}
		}
		for (int j = 0; j < 11; j++)
		{
			std::cout << std::setw(15) << this->info_field[j] << ": ";
			std::cout << this->contacts[index].info[j];
			std::cout << "\n";
		}
	}
	else
	{
		for (int j = 0; j < 4; j++)
			std::cout << "|" << std::setw(10) << "empty";
		std::cout << "|\n";
		print_line();
	}
}

void PhoneBook::add()
{
	if (this->i > 7)
		std::cout << "Sorry, but I can remember only 8 contacts\n";
	else
	{
		this->contacts[this->i].index = this->i;
		for (int i = 0; i < 11; i++)
		{
			std::cout << "Enter the " << this->info_field[i] << "\n->";
			std::cin >> this->contacts[this->i].info[i];
			if (std::cin.fail() || this->contacts[this->i].info[i].length() == 0)
			{
				std::cin.clear();
				std::cin.ignore(32767,'\n');
				std::cout << "Repeate the enter\n";
				i--;
			}
		}
		this->i++;
	}
}

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