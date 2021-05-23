#include "Character.hpp"

Character::Character(std::string const & name)
{
	_name = name;
	_source = new AMateria * [4];
	for (int i = 0; i < 4; i++)
		_source[i] = 0;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != 0)
			delete _source[i];
	}
	delete [] _source;
}

Character::Character(const Character &copy)
{
	_source = new AMateria * [4];
	*this = copy;
}

Character	&Character::operator=(const Character &copy)
{
	_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != 0)
			delete _source[i];
		this->_source[i] = copy._source[i];
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return(_name);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (1)
	{
		if (_source[i] == 0)
		{
			_source[i] = m;
			break;
		}
		i++;
		if (i > 3)
			break;
	}
}

void Character::unequip(int idx)
{
	if(idx < 0 || idx > 3)
		std::cout << "Incorrect index\n";
	else
		_source[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if(idx < 0 || idx > 3)
		std::cout << "Incorrect index\n";
	else if(_source[idx] == 0)
		std::cout << "Im empty\n";
	else
		this->_source[idx]->use(target);
}
