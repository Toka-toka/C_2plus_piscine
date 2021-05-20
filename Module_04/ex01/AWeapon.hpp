#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	private:
		std::string _name;
		int _apcost;
		int _damage;
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon();
		AWeapon(const AWeapon &copy);
		virtual AWeapon	&operator=(const AWeapon &copy);
		
		std::string const getName() const;
		int getAPCost() const;
		int getDamage() const;

		void setName(std::string name);
		void setAPCost(int  ap);
		void setDamage(int damage);

		virtual void attack() const = 0;
};
#endif