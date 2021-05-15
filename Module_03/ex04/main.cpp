#include "SuperTrap.hpp"

int        main(void)
{
    srand(time(0));
    
    SuperTrap SuperTrap("Super");

    SuperTrap.meleeAttack("new_target");
    SuperTrap.rangedAttack("new_target");

    SuperTrap.takeDamage(50);
    SuperTrap.takeDamage(5);
    SuperTrap.takeDamage(3);
    SuperTrap.beRepaired(10);
    SuperTrap.beRepaired(50);
    SuperTrap.beRepaired(1000);
    SuperTrap.takeDamage(120);
    SuperTrap.takeDamage(100);
    SuperTrap.beRepaired(1000);

    SuperTrap.vaulthunter_dot_exe("Something");
    SuperTrap.vaulthunter_dot_exe("Something");
    SuperTrap.vaulthunter_dot_exe("Something");
    
    return (0);
}
