#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &copy): AMateria(copy)
{
}

Ice	&Ice::operator=(const Ice &copy)
{
	AMateria::operator=(copy);
    return (*this);
}

AMateria* Ice::clone() const
{
	AMateria * clone = new Ice(*this);
	return(clone);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at "<< target.getName() << "*\n";
}