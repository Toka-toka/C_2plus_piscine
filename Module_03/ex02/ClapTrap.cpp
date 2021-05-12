#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
		this->_name = "Avatar";
		this->_hit_points = 100;
		this->_max_hit_points = 100;
		this->_level = 1;
		std::cout << "Exemplar of ClapTrap named " << this->_name << " created\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " go to heaven\n";
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "Copy of ClapTrap named " << this->_name << " created\n";
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "ClapTrap named " << this->_name << " becone equal to " << copy._name << "\n";
	this->_name = copy._name;
	this->_hit_points = copy._hit_points;
	this->_max_hit_points = copy._max_hit_points;
	this->_energy_points = copy._energy_points;
	this->_max_energy_points = copy._max_energy_points;
	this->_level = copy._level;
	this->_melee_attack_damage = copy._melee_attack_damage;
	this->_ranged_attack_damage = copy._ranged_attack_damage;
	this->_armor_damage_reduction = copy._armor_damage_reduction;
	return (*this);
}

// штуки
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points != 0)
	{
		std::cout << "Something " << RED << "attacked " << WHT << "piece of iron named " << this->_name;
		std::cout << ", description of attack: " << this->_hit_points << " - (" << amount << " - " << this->_armor_damage_reduction << ") = ";
		amount = amount > this->_armor_damage_reduction ? amount - this->_armor_damage_reduction : 0;
		this->_hit_points = this->_hit_points > amount ? this->_hit_points - amount : 0;
		std::cout << this->_hit_points << "\n";
	}
	else
		std::cout << "Something " << RED << "try to attack " << WHT << "the corpse of " << this->_name << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points != 0)
	{
		std::cout << "Something " << GRN << "repaired" << WHT << "piece of iron named " << this->_name;
		std::cout << ", description of repair: " << this->_hit_points << " + " << amount;
		if (amount > _max_hit_points)
			this->_hit_points = _max_hit_points;
		else 
			this->_hit_points = this->_hit_points + amount > _max_hit_points ? _max_hit_points : this->_hit_points + amount;
		std::cout << " = " << this->_hit_points << "\n";
	}
	else
		std::cout << "Something " << GRN << "try to repair" << WHT << " the corpse of " << this->_name << "\n";
}