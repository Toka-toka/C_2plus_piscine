#include <iostream>
#include <string>

class PhoneBook
{
    public:
        PhoneBook();
        void add();
    private:
        std::string str[2][11];
};

PhoneBook::PhoneBook()
{
    this->str[0][0] = "First name";
    this->str[0][1] = "Last name";
    this->str[0][2] = "Nickname";
    this->str[0][3] = "Login";
    this->str[0][4] = "Postal address";
    this->str[0][5] = "Email address";
    this->str[0][6] = "Phone number";
    this->str[0][7] = "Birthday date";
    this->str[0][8] = "Favorite meal";
    this->str[0][9] = "Underwear color";
    this->str[0][10] = "Darkest secret";
}

void PhoneBook::add()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter the" << this->str[0][i];
        std::cout << "\n";
        std::cin >> this->str[1][i];
        std::cout << this->str[1][i];
        std::cout << "\n";
    }    
}

int main()
{    
    int i = 0;
    std::string input;

    PhoneBook MyPhoneBook[8];
    while (1)
    {
        std::cin >> input;
        if (input == "EXIT")
            exit(0);
        else if (input == "ADD")
        {
            MyPhoneBook[i].add();
            i++;
        }
    }
//    MyPhoneBook.print();
    return(0);
}