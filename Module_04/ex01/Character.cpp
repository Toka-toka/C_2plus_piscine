#include "Character.hpp"

Character::Character(std::string const & name)
{
	_name = name;
	_ap = 40;
	_weapon = 0;
}

Character::Character()
{
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

void Character::recoverAP()
{

}

void Character::attack(Enemy*)
{

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

std::ostream &operator<<(std::ostream &out, Character const &character)
{
	return(out << character.getName() << " has " << 40 << " and " << character.getWeapon() << "\n"); // << character;
}

/*
void Character::attack(Enemy* ptr)
{
	_enemy = ptr;
}*/