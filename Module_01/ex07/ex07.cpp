#include <fstream>
#include <iostream>

int error(int i)
{
    std::string errors[4] = {"Incorrect number of args", "Argv[2] cant be empty", "File can not be open", "File can not be create"};
    std::cout << errors[i] << std::endl;
    exit(1);
}

int main(int argc, char **argv)
{  
    if (argc != 4)
        error(0);
    std::string as_is(argv[2]);
    std::string to_be(argv[3]);
    if (as_is.length() == 0)
        error(1);
    std::ifstream input(argv[1], std::ios_base::in);
    if(!input.is_open())
        error(2);
    std::ofstream output(std::string(argv[1]) + ".replace", std::ios_base::out | std::ios_base::trunc);
    if (!output.is_open())
        error(3);
    std::string buff;
	std::size_t place;
    while (std::getline(input, buff))
    {
        place = 0;
        while ((place = buff.find(as_is, place)) != std::string::npos)
        {
            buff.replace(place, as_is.length(), to_be);
            place += to_be.length();
        }
        output << buff << std::endl;
    }
    output.close();
    input.close();
    return(0);
}