#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap &copy);
		~SuperTrap();
		SuperTrap &operator=(const SuperTrap &copy);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
};
#endif
