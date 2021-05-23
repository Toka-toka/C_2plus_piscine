#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_source = new AMateria * [4];
	_count = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] != 0)
			delete _source[i];
	}
	delete [] _source;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	_source = new AMateria * [4];
	_count = copy._count;
	for (int i = 0; i < 4; i++)
		_source[i] = copy._source[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	_count = copy._count;
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] != 0)
			delete _source[i];
		_source[i] = copy._source[i];
	}
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
	for (int i = 0 ; i < 4 ; i++)
	{
		if (_source[i] == 0)
			continue;
		if (_source[i]->getType() == type)
			return(_source[i]->clone());
	}
	return(0);
}