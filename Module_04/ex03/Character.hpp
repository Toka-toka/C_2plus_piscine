#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
		Character(std::string const & name);
		Character(const Character &copy);
		~Character();
		Character &operator=(const Character &copy);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		std::string _name;
		AMateria** _source;
		Character();
};
#endif
