#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(): ISpaceMarine()
{
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back...\n";
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &copy)
{
	*this = copy;
}

AssaultTerminator	&AssaultTerminator::operator=(const AssaultTerminator &copy)
{
	return (*this);
}

ISpaceMarine* AssaultTerminator::clone() const
{
	ISpaceMarine* bob = new AssaultTerminator;
	return(bob);
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!\n";
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *\n";
}