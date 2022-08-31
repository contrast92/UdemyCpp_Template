#include <iostream>

// Aufbau einer Funktion
// Rückgabetyp Funktionsname (optionale Parameterliste)
// {
//      Funktionscode
// }

int user_input()
{
    int number;

    std::cout << "Please enter a number: ";
    std::cin >> number;

    return number;
}

bool is_even(int number)
{
    if (number % 2 == 0)
    {
        //std::cout << number << " is even" << std::endl;
        return true;
    }
    else
    {
        //std::cout << number << " is odd" << std::endl;
        return false;
    }
}


int main()
{

    int number = user_input();

    std::cout << "The user input was: " << number << std::endl;
    bool check = is_even(number);
    std::cout << std::boolalpha << check << std::endl;
    return 0;
}
