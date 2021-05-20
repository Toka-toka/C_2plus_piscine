#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}

RadScorpion::RadScorpion(const RadScorpion &copy): Enemy(copy.getHP(), copy.getType())
{
	
}

RadScorpion	&RadScorpion::operator=(const RadScorpion &copy)
{
	this->setHP(copy.getHP());
	this->setType(copy.getType());	
	return (*this);
}