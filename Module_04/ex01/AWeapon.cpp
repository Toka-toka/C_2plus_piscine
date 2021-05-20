#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	_name = name;
	_apcost = apcost;
	_damage = damage;
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(const AWeapon &copy)
{
	*this = copy;
}

AWeapon	&AWeapon::operator=(const AWeapon &copy)
{
	_name = copy._name;
	_apcost = copy._apcost;
	_damage = copy._damage;	
	return (*this);
}

std::string const AWeapon::getName() const
{
	return(_name);
}

int AWeapon::getAPCost() const
{
	return(_apcost);
}

int AWeapon::getDamage() const
{
	return(_damage);
}

void AWeapon::setName(std::string name)
{
	_name = name;
}

void AWeapon::setAPCost(int  ap)
{
	_apcost = ap;
}

void AWeapon::setDamage(int damage)
{
	_damage = damage;
}