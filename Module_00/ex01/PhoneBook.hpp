#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

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
		void	add();
		void	out();
		void	print_index();
	private:
		Contact contacts[8];
		int		i;
		std::string info_field[11];
};
#endif