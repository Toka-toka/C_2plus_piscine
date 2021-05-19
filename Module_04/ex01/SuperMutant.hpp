#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &copy);
		~SuperMutant();
		SuperMutant &operator=(const SuperMutant &copy);
		void takeDamage(int damage);
};
#endif
