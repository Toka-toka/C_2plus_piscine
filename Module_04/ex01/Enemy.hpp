#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
	private:
		int _hp;
		std::string _type;
	public:
		Enemy(int hp, std::string const & type);
		~Enemy();
		Enemy(const Enemy &copy);
		Enemy	&operator=(const Enemy &copy);
		std::string const getType() const;
		int getHP() const;
		virtual void takeDamage(int);
};
#endif
