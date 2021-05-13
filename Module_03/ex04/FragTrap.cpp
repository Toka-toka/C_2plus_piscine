#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap()
{
		this->_energy_points = 100;
		this->_max_energy_points = 100;
		this->_melee_attack_damage = 30;
		this->_ranged_attack_damage = 20;
		this->_armor_damage_reduction = 5;

		std::cout << "Exemplar of FR4G-TP was created from " << this->_name;
		this->_name = name;
		std::cout << " and was named " << this->_name << "\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->_name << " go to heaven\n";
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
	std::cout << "Copy of FR4G-TP named " << this->_name << " created\n";
}

FragTrap	&FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FR4G-TP named " << this->_name << " becone equal to " << copy._name << "\n";
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
void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_ranged_attack_damage << " points of damage!\n";
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at melee, causing " << this->_melee_attack_damage << " points of damage!\n";
}

void FragTrap::vaulthunter_dot_exe (std :: string const & target)
{
	std::string attack_type[5] = {"attack №1", "attack №2", "attack №3", "attack №4", "attack №5"};
	
	if (this->_energy_points < 25)
		std::cout << "FR4G-TP named " << this->_name << " doesn't have enough energy for a special attack\n"; 
	else
	{
		this->_energy_points -= 25;
		std::cout << "FR4G-TP named " << this->_name << YEL << " used " << attack_type[rand() % 5] << WHT << " on " << target << ", energy left: " << this->_energy_points << "\n";
	}
}
