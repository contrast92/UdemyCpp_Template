#include <iostream>


int main()
{
    float vector1[3]{};
    float vector2[3]{};

    std::cout << "Enter value for vector 1" << std::endl;

    for (unsigned int i = 0; i < 3; i++)
    {
        std::cin >> vector1[i];
    }

    std::cout << "Enter value for vector 1" << std::endl;

    for (unsigned int i = 0; i < 3; i++)
    {
        std::cin >> vector2[i];
    }


    for (unsigned int i = 0; i < 3; i++)
    {
        int sum = vector1[i] + vector2[i];
        std::cout << "v1[i] + v2[i] is " << sum << std::endl;
    }


    return 0;
}
