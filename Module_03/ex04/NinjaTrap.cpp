#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name): ClapTrap()
{
	if (name != "Avatar")
	{
		this->_hit_points = 60;
		this->_max_hit_points = 60;
		this->_armor_damage_reduction = 0;
		this->_ranged_attack_damage = 5;
		std::cout << "Exemplar of NinjaTrap was created from " << this->_name;
		this->_name = name;
		std::cout << " and was named " << this->_name << "\n";
	}
	else
		std::cout << "Not full exemplar of NinjaTrap-parent was created\n";
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_melee_attack_damage = 60;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap " << this->_name << " go to heaven\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy)
{
	*this = copy;
	std::cout << "Copy of NinjaTrap named " << this->_name << " created\n";
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &copy)
{
	std::cout << "NinjaTrap named " << this->_name << " becone equal to " << copy._name << "\n";
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
void NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NinjaTrap " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_ranged_attack_damage << " points of damage!\n";
}

void NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "NinjaTrap " << this->_name << " attacks " << target;
	std::cout << " at melee, causing " << this->_melee_attack_damage << " points of damage!\n";
}

void NinjaTrap::ninjaShoebox (NinjaTrap &copy)
{
	this->meleeAttack(copy.getName());
	copy.takeDamage(this->_melee_attack_damage);
}

void NinjaTrap::ninjaShoebox (ScavTrap &copy)
{
	this->rangedAttack(copy.getName());
	copy.takeDamage(this->_ranged_attack_damage);
}

void NinjaTrap::ninjaShoebox (FragTrap &copy)
{
	std::cout << "NinjaTrap " << this->_name << " heal " << copy.getName() << "\n";
	copy.beRepaired(this->_ranged_attack_damage);
}