#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    Zombie zombie("Oleg", "Student");
    zombie.announce();

    ZombieEvent event;
    event.setZombieType("Taxist");
    Zombie *event_zombie = event.newZombie("Vit9");
    event_zombie->announce();
    delete event_zombie;

    Zombie *rand[5];
    for(int i = 0 ; i < 5 ; i++)
    {
        rand[i] = event.randomChump();
        delete rand[i];
    }

    return(0);
}