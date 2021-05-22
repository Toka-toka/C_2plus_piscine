#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include <unistd.h> 

int main()
{
	Ice test;
	Ice test1;
	Ice test2;
	Ice test3;
	Ice test4;
	std::cout << test.getType() << "\n";
	std::cout << test.getXP() << "\n";
	ICharacter * target = new Character("me");
	ICharacter * me = new Character("you");

	me->use(0, *target);
	me->use(1, *target);
	me->use(2, *target);
	me->use(3, *target);	

	me->equip(&test);
	me->equip(&test1);
	me->equip(&test2);
	me->equip(&test3);
	me->equip(&test4);

	me->use(0, *target);
	me->use(1, *target);
	me->use(2, *target);
	me->use(3, *target);

	me->unequip(2);

	me->use(0, *target);
	me->use(1, *target);
	me->use(2, *target);
	me->use(3, *target);

	me->equip(&test);

	me->use(0, *target);
	me->use(1, *target);
	me->use(2, *target);
	me->use(3, *target);	

	test.use(*target);
	std::cout << test.getXP() << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(&test);
	src->learnMateria(&test1);
	src->learnMateria(&test2);
	src->learnMateria(&test3);
	src->learnMateria(&test4);
/*	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src; */
	return 0;
}