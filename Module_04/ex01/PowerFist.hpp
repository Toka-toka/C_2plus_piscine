#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
		PowerFist();
		PowerFist(const PowerFist &copy);
		~PowerFist();
		PowerFist &operator=(const PowerFist &copy);
		void attack() const;
	private:
};
#endif
