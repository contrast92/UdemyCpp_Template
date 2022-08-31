#include <iostream>

// &: Memory Address -- Reference
// *: Value of Memory Address -- De-Reference

int main()
{
    int num = 5;
    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;

    int *p = &num;
    std::cout << "Value of p: " << p << std::endl;
    std::cout << "Value of Memory Address that p is pointing to: " << *p << std::endl;
    return 0;
}
