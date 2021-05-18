#include "RedPeon.hpp"

RedPeon::RedPeon(std::string name): Peon(name)
{
	std::cout << "I become demonic.\n";
}

RedPeon::~RedPeon()
{
	std::cout << "*demonic power out*...\n";
}

RedPeon::RedPeon(const RedPeon &copy): Peon("copy")
{
	*this = copy;
}

RedPeon	&RedPeon::operator=(const RedPeon &copy)
{
	this->_name = copy._name;
	return (*this);
}

void RedPeon::getPolymorphed() const
{
	std::cout << this->_name << ":\"you magic didnt work on me!\n";
}