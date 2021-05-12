#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int        main(void)
{
    srand(time(0));
    
    ScavTrap Elu("Elu");
    ScavTrap Elu2(Elu);

    Elu.meleeAttack("new_target");
    Elu.rangedAttack("new_target");

    Elu.takeDamage(50);
    Elu.takeDamage(5);
    Elu.takeDamage(3);
    Elu.beRepaired(10);
    Elu.beRepaired(50);
    Elu.beRepaired(1000);
    Elu.takeDamage(120);
    Elu.takeDamage(100);
    Elu.beRepaired(1000);

    Elu.challengeNewcomer();
    Elu.challengeNewcomer();
    Elu.challengeNewcomer();
    return (0);
}
