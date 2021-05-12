#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
		this->_name = name;
		this->_hit_points = 100;
		this->_max_hit_points = 100;
		this->_energy_points = 100;
		this->_max_energy_points = 100;
		this->_level = 1;
		this->_melee_attack_damage = 30;
		this->_ranged_attack_damage = 20;
		this->_armor_damage_reduction = 5;

		std::cout << "Exemplar of FR4G-TP named " << this->_name << " created\n";
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

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points != 0)
	{
		std::cout << "Something " << RED << "attacked " << WHT << "FR4G-TP named " << this->_name;
		std::cout << ", description of attack: " << this->_hit_points << " - (" << amount << " - " << this->_armor_damage_reduction << ") = ";
		amount = amount > this->_armor_damage_reduction ? amount - this->_armor_damage_reduction : 0;
		this->_hit_points = this->_hit_points > amount ? this->_hit_points - amount : 0;
		std::cout << this->_hit_points << "\n";
	}
	else
		std::cout << "Something " << RED << "try to attack " << WHT << "the corpse of " << this->_name << "\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points != 0)
	{
		std::cout << "Something " << GRN << "repaired" << WHT << " FR4G-TP named " << this->_name;
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

void FragTrap::vaulthunter_dot_exe (std :: string const & target)
{
	std::string attack_type[5] = {"attack №1", "Attack №2", "Attack №3", "Attack №4", "Attack №5"};
	
	if (this->_energy_points < 25)
		std::cout << "FR4G-TP named " << this->_name << " doesn't have enough energy for a special attack\n"; 
	else
	{
		this->_energy_points -= 25;
		std::cout << "FR4G-TP named " << this->_name << YEL << " used " << attack_type[rand() % 5] << WHT << " on " << target << ", energy left: " << this->_energy_points << "\n";
	}
}
