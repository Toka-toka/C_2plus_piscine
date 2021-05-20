#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine &copy);
		~TacticalMarine();
		TacticalMarine &operator=(const TacticalMarine &copy);

		TacticalMarine* clone();
		void battleCry();
		void rangedAttack();
		void meleeAttack();
	private:
};
#endif
