#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	_name = name;
	_apcost = apcost;
	_damage = damage;
}

AWeapon::~AWeapon()
{
	std::cout << "Im here im parent\n";
	delete this;
}

AWeapon::AWeapon(const AWeapon &copy)
{
	*this = copy;
}

AWeapon	&AWeapon::operator=(const AWeapon &copy)
{
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