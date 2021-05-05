#include "Human.hpp"

Human::Human()
{
    Brain _brain;
}

std::string Human::identify()
{
    return(this->_brain.identify());
}
