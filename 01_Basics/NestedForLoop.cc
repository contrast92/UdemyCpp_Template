#include <iostream>

int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                std::cout << "i: " << i << " j: " << j << " k: " << k << std::endl;
            }
        }
    }

    return 0;
}
