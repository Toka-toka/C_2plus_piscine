#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): NinjaTrap("Avatar1"), FragTrap("Avatar2")
{
		this->_energy_points = this->NinjaTrap::_max_energy_points;
		this->_max_energy_points = this->NinjaTrap::_max_energy_points;
		this->_melee_attack_damage = 20;
		this->_ranged_attack_damage = 15;
		this->_armor_damage_reduction = 3;

		std::cout << "Exemplar of SuperTrap was created from " << this->_name;
		this->_name = name;
		std::cout << " and was named " << this->_name << "\n";
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap " << this->_name << " go to heaven\n";
}

SuperTrap::SuperTrap(const SuperTrap &copy): NinjaTrap("Avatar1"), FragTrap("Avatar2")
{
	*this = copy;
	std::cout << "Copy of SuperTrap named " << this->_name << " created\n";
}

SuperTrap	&SuperTrap::operator=(const SuperTrap &copy)
{
	std::cout << "SuperTrap named " << this->_name << " becone equal to " << copy._name << "\n";
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
void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}
