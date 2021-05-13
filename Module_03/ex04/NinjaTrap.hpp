#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
	public:
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap &copy);
		~NinjaTrap();
		NinjaTrap &operator=(const NinjaTrap &copy);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);

		void ninjaShoebox (NinjaTrap &copy);
		void ninjaShoebox (ScavTrap &copy);
		void ninjaShoebox (FragTrap &copy);
};
#endif
