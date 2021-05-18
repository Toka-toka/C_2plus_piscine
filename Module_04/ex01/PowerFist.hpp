#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>

class PowerFist
{
	public:
		PowerFist();
		PowerFist(const PowerFist &copy);
		~PowerFist();
		PowerFist &operator=(const PowerFist &copy);
	private:
};
#endif
