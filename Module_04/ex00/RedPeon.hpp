#ifndef REDPEON_HPP
# define REDPEON_HPP

#include <iostream>
#include "Peon.hpp"

class RedPeon: public Peon
{
	public:
		RedPeon(std::string name);
		RedPeon(const RedPeon &copy);
		~RedPeon();
		RedPeon &operator=(const RedPeon &copy);

		void getPolymorphed() const;
};
#endif
