#include <iomanip>
#include <iostream>

// C++ Casting: static_cast<new D-Type>(varName) - converts object to wanted type
// C-Style Casting: (new D-Type)(varName)
// ---static cast is Easier to read, less error prone


int main()
{
    double numd = 3.14;
    std::cout << std::setprecision(20) << numd << std::endl;

    // C-Casting - (new D-type)(varName)
    float numf = (float)(numd);
    std::cout << std::setprecision(20) << numf << std::endl;

    float numfc = static_cast<float>(numd);

    return 0;
}
