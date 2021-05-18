#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>

class SuperMutant
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &copy);
		~SuperMutant();
		SuperMutant &operator=(const SuperMutant &copy);
	private:
};
#endif
