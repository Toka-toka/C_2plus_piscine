#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy): AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle	&PlasmaRifle::operator=(const PlasmaRifle &copy)
{
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}