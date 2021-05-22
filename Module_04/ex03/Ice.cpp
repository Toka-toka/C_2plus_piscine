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
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria * test = new Ice();
	return(test);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at NAME *\n";
}