#include "Pony.hpp"

Pony::Pony()
{
	int value = rand();
	
	if (value % 2 == 0)
	{
		this->_gender = "Male";
		this->_name = male_names[value % 3];
	}
	else
	{
		this->_gender = "Female";
		this->_name = female_names[value % 3];
	}
	this->_age = value % (40 - 10) + 10;
	this->_height = value % (120 - 80) + 80;
	this->_weight = (float)this->_height / 100 * (rand() % (150 - 120) + 120);
}

Pony::~Pony()
{
	std::cout << this->_name << " go to heaven" << std::endl << std::endl;
}

void Pony::print_description()
{
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Age: " << this->_age << std::endl;
	std::cout << "Gender: " << this->_gender << std::endl;
	std::cout << "Height: " << this->_height << std::endl;
	std::cout << "Weight: " << this->_weight << std::endl << std::endl;
}