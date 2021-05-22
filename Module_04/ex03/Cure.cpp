#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure &copy): AMateria(copy)
{

}

Cure	&Cure::operator=(const Cure &copy)
{
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria * test = new Cure();
	return(test);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals NAME’s wounds *\n";
}