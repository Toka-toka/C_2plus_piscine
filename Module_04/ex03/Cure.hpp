#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>

class Cure
{
	public:
		Cure();
		Cure(const Cure &copy);
		~Cure();
		Cure &operator=(const Cure &copy);
	private:
};
#endif
