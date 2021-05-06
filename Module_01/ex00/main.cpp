#include "Pony.hpp"

void ponyOnTheStack()
{
    Pony pony;
    pony.print_description();
}

void ponyOnTheHeap()
{
    Pony *pony = new Pony();
    pony->print_description();
    delete pony;
}

int	main()
{
    srand(time(0));
    ponyOnTheHeap();
    ponyOnTheStack();
    return 0;
}