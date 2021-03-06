#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap()
{
		this->_energy_points = 50;
		this->_max_energy_points = 50;
		this->_melee_attack_damage = 20;
		this->_ranged_attack_damage = 15;
		this->_armor_damage_reduction = 3;

		std::cout << "Exemplar of Scavtrap was created from " << this->_name;
		this->_name = name;
		std::cout << " and was named " << this->_name << "\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap " << this->_name << " go to heaven\n";
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
	std::cout << "Copy of Scavtrap named " << this->_name << " created\n";
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "Scavtrap named " << this->_name << " becone equal to " << copy._name << "\n";
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
void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "Scavtrap " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_ranged_attack_damage << " points of damage!\n";
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "Scavtrap " << this->_name << " attacks " << target;
	std::cout << " at melee, causing " << this->_melee_attack_damage << " points of damage!\n";
}

void ScavTrap::challengeNewcomer ()
{
	std::string attack_type[5] = {"business №1", "business №2", "business №3", "business №4", "business №5"};
	
	if (this->_energy_points < 25)
		std::cout << "Scavtrap named " << this->_name << " doesn't have enough energy for a special business\n"; 
	else
	{
		this->_energy_points -= 25;
		std::cout << "Scavtrap named " << this->_name << YEL << " doing " << attack_type[rand() % 5] << WHT << ", energy left: " << this->_energy_points << "\n";
	}
}
