#include <iostream>

int main(int argv, char **argc)
{    
    int i;
    int j;
    
    if (argv == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return(0);
    }
    for (i = 1; argc[i] != NULL; i++)
        for (j = 0; argc[i][j] != 0; j++)
            std::cout << (char)toupper(argc[i][j]);
    std::cout << "\n";
    return(0);
}