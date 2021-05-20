#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

int		main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	delete bob;
	return (0);
}
