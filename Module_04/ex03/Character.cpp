#include "Character.hpp"

Character::Character(std::string const & name)
{
	_name = name;
	_source = new AMateria * [4];
}

Character::~Character()
{
}

Character::Character(const Character &copy)
{
}

Character	&Character::operator=(const Character &copy)
{
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
	{
		_source[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if(idx < 0 || idx > 3)
		std::cout << "Incorrect index\n";
	else if(_source[idx] == 0)
		std::cout << "Im empty\n";
	else
		std::cout << "I have somethink\n";
}
