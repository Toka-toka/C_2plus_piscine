#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

const std::string male_names[3] = {"Orion", "Pegasus", "Phoenix"};
const std::string female_names[3] = {"Andromeda", "Cassiopeia", "Sagitta"};

class Pony
{
	public:
		Pony();
		void print_description();
		~Pony();

	private:
		std::string	_name;
		std::string	_gender;
		int			_weight;
		int			_height;
		int			_age;
};
#endif

