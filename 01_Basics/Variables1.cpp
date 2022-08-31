#include <iostream>

int main()
{

    double number1;
    double number2;
    double result;


    std::cout << "please enter a number: "<< std::endl;;
    std::cin >> number1;

    std::cout << "please enter another number: "<< std::endl;;
    std::cin >> number2;

    result = number1 * number2;
    std::cout << "number1 * number2 = " << result << std::endl;

    result = number1 + number2;
    std::cout << "number1 + number2 = " << result << std::endl;

    return 0;
}

