#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include <iostream>

class ISquad
{
	public:
		ISquad();
		ISquad(const ISquad &copy);
		~ISquad();
		ISquad &operator=(const ISquad &copy);
	private:
};
#endif
