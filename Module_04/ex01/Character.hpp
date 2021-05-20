#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
	private:
		std::string _name;
		int _ap;
		AWeapon* _weapon;
		Character();
	public:
		Character(std::string const & name);
		~Character();
		Character(const Character &copy);
		Character	&operator=(const Character &copy);
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const getWeapon() const;
		std::string const getName() const;
		int getAp() const;
};

std::ostream &operator<<(std::ostream &out, Character const &character);

#endif