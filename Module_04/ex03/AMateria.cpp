#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	_xp = 0;
	_type = type;
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	_xp = copy._xp;
	_type = copy._type;	
	return(*this);
}

virtual AMateria::~AMateria()
{

}

std::string const & AMateria::getType() const
{
	return(_type);
}

unsigned int AMateria::getXP() const;
{

}

virtual void AMateria::use(ICharacter& target)
{

}