#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int number)
{
    srand(time(0));
    _number = number;
    _horde = new Zombie[number];
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->_horde;
}

void ZombieHorde::announce()
{
    for (int i = 0 ; i < this->_number ; i++)
        _horde[i].announce();
}