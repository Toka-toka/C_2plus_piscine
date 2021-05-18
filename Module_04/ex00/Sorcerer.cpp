#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	_name = name;
	_title = title;
	std::cout << _name << ", " << _title << ", is born!\n";
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!\n";
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	*this = copy;
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &copy)
{
	_name = copy._name;
	_title = copy._title;
	return (*this);
}

std::string Sorcerer::getName() const
{
	return(this->_name);
}

std::string Sorcerer::getTitle() const
{
	return(this->_title);
}

void Sorcerer::polymorph(Victim const &a)
{
	a.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcer)
{
	return (out << "I am " << sorcer.getName() << ", " << sorcer.getTitle() << ", and I like ponies!\n");
}