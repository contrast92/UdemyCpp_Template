#include <iostream>

int main()
{
    int age1 = 28;
    std::int16_t age2 = 130;

    int older_age1;


    older_age1 = (age1 > age2) ? age1 : age2;

    std::cout << "The oldest age is " << older_age1 << std::endl;

    return 0;
}
