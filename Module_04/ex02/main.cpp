#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

int main()
{
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;

		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	std::cout << "\n--- || --- || --- || --- || ---\n";
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;

		Squad vlc1;
		Squad vlc2;

		vlc1.getUnit(0);
		vlc1.getUnit(1);
		std::cout << "vlc1.getCount(): " << vlc1.getCount() << "\n";
		std::cout << "vlc2.getCount(): " <<vlc2.getCount() << "\n";
		
		vlc1.push(bob);
		vlc2.push(jim);
		
		std::cout << "vlc1.getCount(): " << vlc1.getCount() << "\n";
		std::cout << "vlc2.getCount(): " <<vlc2.getCount() << "\n";

		vlc2.push(jim);
		std::cout << "vlc2.getCount(): " <<vlc2.getCount() << "\n";
		
		for (int i = 0; i < vlc1.getCount(); ++i)
		{
			ISpaceMarine* cur = vlc1.getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		std::cout << "\n--- || --- || copy || --- || ---\n";
		Squad vlc3(vlc1);
		for (int i = 0; i < vlc3.getCount(); ++i)
		{
			ISpaceMarine* cur = vlc3.getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		std::cout << "\n--- || --- ||  =  || --- || ---\n";
		vlc1 = vlc2;
		for (int i = 0; i < vlc1.getCount(); ++i)
		{
			ISpaceMarine* cur = vlc1.getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
	}
	return 0;
}