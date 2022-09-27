#include <iostream>
#include <vector>

int main()
{
    //int *data = new int[5];

    std::vector<int> my_vector(2, 0);

    // std::cout << my_vector[0] << std::endl;
    // std::cout << my_vector[1] << std::endl;

    my_vector.push_back(55);

    // std::cout << my_vector[0] << std::endl;
    // std::cout << my_vector[1] << std::endl;
    // std::cout << my_vector[2] << std::endl;

    for (std::size_t i = 0; i < my_vector.size(); ++i)
    {
        std::cout << "added Element: " << my_vector[i] << std::endl;
    }

    my_vector.pop_back();

    for (std::size_t i = 0; i < my_vector.size(); ++i)
    {
        std::cout << "deleted: " << my_vector[i] << std::endl;
    }

    return 0;
}
