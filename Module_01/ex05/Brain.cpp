#include "Brain.hpp"

const std::string Brain::identify()
{
    std::ostringstream str;
    str << (int *)this;
    return(str.str());
}
