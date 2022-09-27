#include <iostream>
#include <numeric>
#include <vector>

void print_vector(const std::vector<int> &my_vector)
{
    for (std::size_t i = 0; i < my_vector.size(); ++i)
    {
        std::cout << "Vec[" << i << "] = " << my_vector[i] << std::endl;
    }
    std::cout << std::endl;
}


void print_vector_info(const std::vector<int> &my_vector)
{
    std::cout << "Size: " << my_vector.size() << std::endl;
    std::cout << "Capacity: " << my_vector.capacity() << std::endl;
    std::cout << "Empty: " << std::boolalpha << my_vector.empty() << std::endl;
}

int main()
{

    std::vector<int> my_vector(10, 5);
    std::iota(my_vector.begin(), my_vector.end(), 0);

    print_vector(my_vector);

    auto begin = my_vector.begin();
    auto end = my_vector.end();

    std::cout << *begin << std::endl;
    std::cout << *end << std::endl;

    // (begin, end)
    for (auto it = my_vector.begin(); it != my_vector.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    //foreach loop
    for (const auto &val : my_vector)
    {
        std::cout << val << std::endl;
    }


    return 0;
}
