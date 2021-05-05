#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie 
{
    public:
        Zombie();
        void announce();
    private:
        std::string _name;
        std::string _type;
};
#endif