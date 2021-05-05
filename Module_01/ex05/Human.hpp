#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human 
{
    const Brain _brain;
    public:
        Human();
        std::string identify();
};
#endif