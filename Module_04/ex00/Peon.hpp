#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon: public Victim
{
	public:
		Peon(std::string name);
		Peon(const Peon &copy);
		~Peon();
		Peon &operator=(const Peon &copy);

		void getPolymorphed() const;
	protected:
};
#endif
