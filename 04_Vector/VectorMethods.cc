#include <iostream>
#include <vector>

void print_vector_info(const std::vector<int> &my_vector)
{
    std::cout << "Size: " << my_vector.size() << std::endl;
    std::cout << "Capacity: " << my_vector.capacity() << std::endl;
    std::cout << "Empty: " << std::boolalpha << my_vector.empty() << std::endl;
}

int main()
{
    std::vector<int> my_vector(10, 0);

    print_vector_info(my_vector);
    return 0;
}
