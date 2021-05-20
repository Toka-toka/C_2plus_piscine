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
		virtual ~Enemy();
		Enemy(const Enemy &copy);
		Enemy	&operator=(const Enemy &copy);
		std::string const getType() const;
		int getHP() const;

		void setHP(int hp);
		void setType(std::string const & type);
		
		virtual void takeDamage(int);
};
#endif
