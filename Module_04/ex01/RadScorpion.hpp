#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <iostream>

class RadScorpion
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &copy);
		~RadScorpion();
		RadScorpion &operator=(const RadScorpion &copy);
	private:
};
#endif
