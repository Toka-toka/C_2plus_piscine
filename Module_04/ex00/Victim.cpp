#include "Victim.hpp"

Victim::Victim(std::string name)
{
	_name = name;
	std::cout << "Some random victim called " << _name << " just appeared!\n";
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!\n";
}

Victim::Victim(const Victim &copy)
{
	*this = copy;
}

Victim	&Victim::operator=(const Victim &copy)
{
	this->_name = copy._name;
	return (*this);
}

std::string Victim::getName() const
{
	return(this->_name);
}

std::ostream &operator<<(std::ostream &out, Victim const &victim)
{
	return(out << "I'm " << victim.getName() << " and I like otters!\n");
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!\n";
}