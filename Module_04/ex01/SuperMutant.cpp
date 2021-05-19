#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh...\n";
}

SuperMutant::SuperMutant(const SuperMutant &copy): Enemy(170, "Super Mutant")
{

}

SuperMutant	&SuperMutant::operator=(const SuperMutant &copy)
{
	return (*this);
}

void SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (damage > 0)
		Enemy::takeDamage(damage);
}