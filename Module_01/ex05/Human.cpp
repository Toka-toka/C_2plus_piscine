#include "Human.hpp"

Human::Human()
{
}

const Brain &Human::getBrain()
{
    const Brain &reference = this->_brain;
    return(reference);
}

std::string Human::identify()
{
    return(this->_brain.identify());
}