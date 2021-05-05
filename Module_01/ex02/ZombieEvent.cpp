#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
    srand(time(0));
    this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    return(new Zombie(name, this->_type));
}

std::string randomName()
{
    std::string names[9] = {"Anton", "Andre", "Vadim", "Vlad", "Alex", "Lana", "Dmitriy", "Nikita", "Ruslan"};
    return(names[rand() % 9]);
}

Zombie* ZombieEvent::randomChump()
{
    Zombie * rand = new Zombie(randomName(), this->_type);
    rand->announce();
    return(rand);
}