#include "Brain.hpp"

std::string Brain::identify() const
{
    std::ostringstream str;
    str << (int *)this;
    return(str.str());
}
