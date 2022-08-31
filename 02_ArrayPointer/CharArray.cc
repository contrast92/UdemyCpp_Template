#include <iostream>

int main()
{

    // \0 needs to be added to indicate the end of the string
    char first_name[] = {'M', 'a', 'l', 't', 'e', '\0'};

    std::cout << first_name << std::endl;

    // better implementation, +1 in size due to \0 automatically added to the end
    char last_name[] = "Martini";

    std::cout << last_name << std::endl;

    for (int i = 0; i < 7; i++)
    {
        std::cout << "last_name[i] " << last_name[i] << std::endl;
    }

    return 0;
}
