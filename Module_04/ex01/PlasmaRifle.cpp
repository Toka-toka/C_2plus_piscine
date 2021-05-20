#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy): AWeapon(copy.getName(), copy.getAPCost(), copy.getDamage())
{
}

PlasmaRifle	&PlasmaRifle::operator=(const PlasmaRifle &copy)
{
	this->setName(copy.getName());
	this->setAPCost(copy.getAPCost());
	this->setDamage(copy.getDamage());
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}