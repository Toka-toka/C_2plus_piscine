#include "NinjaTrap.hpp"

int        main(void)
{
    srand(time(0));

    NinjaTrap Ninja1("Ninja1");
    
    Ninja1.meleeAttack("new_target");
    Ninja1.rangedAttack("new_target");

    Ninja1.takeDamage(50);
    Ninja1.takeDamage(5);
    Ninja1.takeDamage(3);
    Ninja1.beRepaired(10);
    Ninja1.beRepaired(50);
    Ninja1.beRepaired(1000);
    Ninja1.takeDamage(120);
    Ninja1.takeDamage(100);
    Ninja1.beRepaired(1000);

    std::cout << "--- / --- / --- / --- / --- \n";

    NinjaTrap Ninja2("Ninja2");
    FragTrap FragTrap1("FragTrap");
    ScavTrap ScavTrap1("ScavTrap");

    std::cout << "--- / --- / --- / --- / --- \n";

    Ninja1.ninjaShoebox(Ninja2);
    Ninja1.ninjaShoebox(FragTrap1);
    Ninja1.ninjaShoebox(ScavTrap1);
    return (0);
}
