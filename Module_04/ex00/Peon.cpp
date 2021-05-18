#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog.\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

Peon::Peon(const Peon &copy): Victim("copy")
{
	*this = copy;
}

Peon	&Peon::operator=(const Peon &copy)
{
	this->_name = copy._name;
	return (*this);
}

void Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!\n";
}