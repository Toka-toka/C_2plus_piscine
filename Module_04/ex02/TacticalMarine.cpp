#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(): ISpaceMarine()
{
	std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh...\n";
}

TacticalMarine::TacticalMarine(const TacticalMarine &copy)
{
	*this = copy;
}

TacticalMarine	&TacticalMarine::operator=(const TacticalMarine &copy)
{
	(void)copy;
	return (*this);
}

ISpaceMarine* TacticalMarine::clone() const
{
	ISpaceMarine* bob = new TacticalMarine;
	return(bob);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!\n";
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *\n";
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *\n";
}
