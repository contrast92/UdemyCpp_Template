#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

bool sort_ascending(const int i, const int j)
{
    return i < j;
}
bool sort_descending(const int i, const int j)
{
    return i > j;
}

void print_vector(std::vector<int> &vec)
{
    for (std::size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << "Vec[" << i << "] = " << vec[i] << std::endl;
    }

    std::cout << " " << std::endl;
}


int main()
{
    std::vector<int> my_vector(10, 0);
    std::iota(my_vector.begin(), my_vector.end(), 0);
    print_vector(my_vector);

    std::sort(my_vector.begin(), my_vector.end(), sort_descending);
    print_vector(my_vector);

    std::sort(my_vector.begin(), my_vector.end(), sort_ascending);
    print_vector(my_vector);


    return 0;
}
