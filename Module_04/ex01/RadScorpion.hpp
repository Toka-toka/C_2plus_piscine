#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion: public Enemy
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &copy);
		~RadScorpion();
		RadScorpion &operator=(const RadScorpion &copy);
	private:
};
#endif
