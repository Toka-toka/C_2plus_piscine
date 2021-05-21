#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>

class Character
{
	public:
		Character();
		Character(const Character &copy);
		~Character();
		Character &operator=(const Character &copy);
	private:
};
#endif
