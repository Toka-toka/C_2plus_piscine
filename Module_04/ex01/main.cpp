#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int		main(void)
{
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	pr->attack();
	pf->attack();

	Enemy* b = new SuperMutant();
	
	std::cout << b->getHP() << "\n";
	b->takeDamage(10);
	std::cout << b->getHP() << "\n";
	b->takeDamage(163);
	std::cout << b->getHP() << "\n";
	b->takeDamage(5);
	std::cout << b->getHP() << "\n";
	b->takeDamage(5);
	std::cout << b->getHP() << "\n";

	Character* me = new Character("me");

	
	
	std::cout << *me;

	me->equip(pr);

	std::cout << *me;

	return (0);
}
