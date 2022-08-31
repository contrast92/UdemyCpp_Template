#include <iostream>

int main()
{
    float user_balances[20] = {};

    for (int i = 0; i < 20; i++)
    {
        user_balances[i] = i;
    }

    for (int i = 0; i < 20; i++)

        std::cout << user_balances[i] << std::endl;

    return 0;
}
