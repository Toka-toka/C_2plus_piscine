#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh...\n";
}

TacticalMarine::TacticalMarine(const TacticalMarine &copy)
{
}

TacticalMarine	&TacticalMarine::operator=(const TacticalMarine &copy)
{
	return (*this);
}

TacticalMarine* TacticalMarine::clone()
{
	return(this);
}

void TacticalMarine::battleCry()
{

}

void TacticalMarine::rangedAttack()
{

}

void TacticalMarine::meleeAttack()
{

}
