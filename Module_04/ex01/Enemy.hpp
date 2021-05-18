#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
	public:
		Enemy();
		Enemy(const Enemy &copy);
		~Enemy();
		Enemy &operator=(const Enemy &copy);
	private:
};
#endif
