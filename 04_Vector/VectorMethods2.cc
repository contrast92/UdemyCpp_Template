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
    print_vector_info(my_vector);


    int first = my_vector.front();
    int last = my_vector.back();

    //To return a pointer of a vector
    int *array = my_vector.data();


    return 0;
}
