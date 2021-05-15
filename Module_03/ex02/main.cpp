#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int        main(void)
{
    srand(time(0));
    
    ScavTrap Elu("Elu_trap");

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

    std::cout << "--- / --- / --- / --- / --- \n";

    FragTrap Elu1("Elu_frag");

    Elu1.meleeAttack("new_target");
    Elu1.rangedAttack("new_target");

    Elu1.takeDamage(50);
    Elu1.takeDamage(5);
    Elu1.takeDamage(3);
    Elu1.beRepaired(10);
    Elu1.beRepaired(50);
    Elu1.beRepaired(1000);
    Elu1.takeDamage(120);
    Elu1.takeDamage(100);
    Elu1.beRepaired(1000);

    Elu1.vaulthunter_dot_exe("something");
    Elu1.vaulthunter_dot_exe("something");
    Elu1.vaulthunter_dot_exe("something");
    return (0);
}
