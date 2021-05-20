#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{

}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(const PowerFist &copy): AWeapon(copy.getName(), copy.getAPCost(), copy.getDamage())
{
}

PowerFist	&PowerFist::operator=(const PowerFist &copy)
{
	this->setName(copy.getName());
	this->setAPCost(copy.getAPCost());
	this->setDamage(copy.getDamage());
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *\n";
}