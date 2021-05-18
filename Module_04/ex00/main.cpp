#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "RedPeon.hpp"

int main()
{
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
}
	std::cout << "\n --- / --- / --- / --- / --- \n";
{
	Sorcerer robert("Robert", "the Magnificent");
	RedPeon red_joe("Demonic joe");
	std::cout << red_joe;
	robert.polymorph(red_joe);

	return 0;
}
}