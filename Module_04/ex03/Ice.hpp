#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>

class Ice
{
	public:
		Ice();
		Ice(const Ice &copy);
		~Ice();
		Ice &operator=(const Ice &copy);
	private:
};
#endif
