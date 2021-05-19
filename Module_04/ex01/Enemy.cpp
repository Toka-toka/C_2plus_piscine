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
}

Enemy	&Enemy::operator=(const Enemy &copy)
{
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

void Enemy::takeDamage(int damage)
{
	_hp = damage >= _hp ? 0 : _hp - damage;
}
