#include <iostream>
#include <vector>

int main()
{
    std::vector<int> my_vector;

    for (auto i = 0; i < 30; ++i)
    {
        my_vector.push_back(i);
    }

    std::cout << "Size: " << my_vector.size() << std::endl;
    std::cout << "Capacity: " << my_vector.capacity() << std::endl;

    return 0;
}
