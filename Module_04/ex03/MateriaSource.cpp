#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_source = new AMateria * [4];
	_count = 0;
}

MateriaSource::~MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	return (*this);
}

void MateriaSource::learnMateria(AMateria* ptr)
{
	if (_count < 4)
	{
		_source[_count] = ptr;
		_count++;
	}
	else
		std::cout << "I cant learn more Materia\n";
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	return(0);
}