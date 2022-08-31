#include <iostream>
#include <cstdint>


int main()
{
    float side_a;
    float side_b;
    std::cout << "please input a number for side_a: " << std::endl;
    std::cin >> side_a;

    std::cout << "please input a number for side_b: " << std::endl;
    std::cin >> side_b;

    float area = side_a * side_b;
    std::cout << "the area of " << side_a << " and " << side_b <<  " is " << area << std::endl;

    float perimeter = side_a + side_a + side_b + side_b;
    std::cout << "the perimeter is " << perimeter << std::endl;

    return 0;
}
