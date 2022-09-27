#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    int matrix[2][3]{};

    for (const auto &row : matrix)
    {
        for (const auto &value : row)
        {
            std::cout << value << std::endl;
        }
        std::cout << std::endl;
    }

    struct Data
    {
        int x;
        int y;
    };

    // alte lange schreibweise !
    std::vector<Data> vec{{.x = 1, .y = 2}, {.x = 3, .y = 4}, {.x = 5, .y = 6}};

    for (const auto &data : vec)
    {
        std::cout << data.x << data.y << std::endl;
    }

    std::cout << std::endl;

    // neue kürzere Schreibweise !
    for (const auto &[x1, y1] : vec)
    {
        std::cout << x1 << y1 << std::endl;
    }

    return 0;
}
