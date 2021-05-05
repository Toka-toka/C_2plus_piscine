#include "Zombie.hpp"

std::string randomName()
{
    std::string names[9] = {"Anton", "Andre", "Vadim", "Vlad", "Alex", "Lana", "Dmitriy", "Nikita", "Ruslan"};
    return(names[rand() % 9]);
}

std::string randomType()
{
    std::string names[3] = {"Student", "Taxist", "Clerk"};
    return(names[rand() % 3]);
}

Zombie::Zombie()
{
    _name = randomName();
    _type = randomType();
}

void    Zombie::announce()
{
    std::cout << this->_name << " (" << this->_type << ") " <<"Braiiiiiiinnnssss..." << std::endl;
}