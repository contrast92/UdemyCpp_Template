# include <iostream>


int main()
{
    int year;
    std::cout << "Please enter the year:";
    std::cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                std::cout << "The year " << year << " is a leap year" << std::endl;
            } else {
                std::cout << "The year " << year << " is not a leap year" << std::endl;
            }

        } else {
            std::cout << "The year " << year << " is a leap year" << std::endl;
        }
    }
    else
    {
        std::cout << "The year " << year << " is not a leap year" << std::endl;
    }
}
