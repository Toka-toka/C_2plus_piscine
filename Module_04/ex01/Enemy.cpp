#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
	_hp = hp;
	_type = type;
}

Enemy::~Enemy()
{
}

Enemy::Enemy(const Enemy &copy)
{
	*this = copy;
}

Enemy	&Enemy::operator=(const Enemy &copy)
{
	_hp = copy._hp;
	_type = copy._type;
	return (*this);
}

std::string const Enemy::getType() const
{
	return(_type);
}

int Enemy::getHP() const
{
	return(_hp);
}


void Enemy::setHP(int hp)
{
	_hp = hp;
}

void Enemy::setType(std::string const & type)
{
	_type = type;
}

void Enemy::takeDamage(int damage)
{
	if(damage > 0)
		_hp = damage >= _hp ? 0 : _hp - damage;
}
