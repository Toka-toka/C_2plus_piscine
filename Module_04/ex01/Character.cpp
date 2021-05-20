#include "Character.hpp"

Character::Character(std::string const & name)
{
	_name = name;
	_ap = 40;
	_weapon = 0;
}

Character::~Character()
{
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character	&Character::operator=(const Character &copy)
{
	_ap = copy._ap;
	_name = copy._name;
	_weapon = copy._weapon;
	return (*this);
}

void Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

std::string const Character::getName() const
{
	return(_name);
}

void Character::equip(AWeapon* ptr)
{
	_weapon = ptr;
}

std::string const Character::getWeapon() const
{
	if (_weapon == 0)
		return("is unarmed");
	return("wields a " + _weapon->getName());
}

int	Character::getAp() const
{
	return(_ap);
}

std::ostream &operator<<(std::ostream &out, Character const &character)
{
	return(out << character.getName() << " has " << character.getAp() << " AP and " << character.getWeapon() << "\n"); // << character;
}

void Character::attack(Enemy* ptr)
{
	if (ptr == 0)
		std::cout << this->getName() << " attacks air and nothing hapend\n";
	else if (_weapon == 0)
		std::cout <<  this->getName() << " try to attack " << ptr->getType() << ", but forgot to take weapon\n";
	else if(ptr->getHP() == 0)
		std::cout <<  this->getName() << " try to attack " << ptr->getType() << ", but it's already dead\n";
	else
	{
		int coast = _weapon->getAPCost();
		if (coast <= _ap)
		{
			ptr->takeDamage(_weapon->getDamage());
			std::cout << this->getName() << " attacks " << ptr->getType() << " with a " << _weapon->getName() << "\n";
			_weapon->attack();
			_ap -= coast;
		}
		if (ptr->getHP() == 0)
		{
			ptr->~Enemy();
		}
	}
}