#include <string>
#include <iostream>
#include <string>

int main()
{
    std::string str;
    str = "HI THIS IS BRAIN";
    
    std::string *pointer = &str;

    std::string &reference = str;

    std::cout << str << std::endl; 
    std::cout << *pointer << std::endl;
    std::cout << reference << std::endl; 
}