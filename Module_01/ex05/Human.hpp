#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human 
{
    const Brain _brain;
    public:
        Human();
        const Brain &getBrain();
        std::string identify();
};
#endif