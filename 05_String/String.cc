#include <iostream>
#include <string>


int main()
{
    std::string s = "hallo malte";

    std::cout << s << std::endl;

    auto concat{s + ", hallo echo"};

    std::cout << "concat: " << concat << std::endl;

    return 0;
}
