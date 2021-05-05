#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <string>
#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
    public:
        ZombieHorde(int number);
        ~ZombieHorde();
        void announce();
    private:
        int _number;
        Zombie *_horde;
};
#endif