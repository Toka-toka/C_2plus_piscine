#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): FragTrap("Avatar"), NinjaTrap("Avatar")
{
		std::cout << "Exemplar of SuperTrap was created from " << this->_name;
		this->_name = name;
		std::cout << " and was named " << this->_name << "\n";

		std::cout << "--- / --- / --- / --- / --- \n";
		std::cout << "hit_points: " << _hit_points << '\n';
		std::cout << "max_points: " << _max_hit_points << '\n';
		std::cout << "energy_points: " << _energy_points << '\n';
		std::cout << "max_energy_points: " << _max_energy_points << '\n';
		std::cout << "level: " << _level << '\n';
		std::cout << "name: " << _name << '\n';
		std::cout << "melee_attack_damage: " << _melee_attack_damage << '\n';
		std::cout << "ranged_attack_damage: " << _ranged_attack_damage << '\n';
		std::cout << "armor_damage_reduction: " << _armor_damage_reduction << '\n';
		std::cout << "--- / --- / --- / --- / --- \n";
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap " << this->_name << " go to heaven\n";
}

SuperTrap::SuperTrap(const SuperTrap &copy): FragTrap("Avatar"), NinjaTrap("Avatar")
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
