#include <cmath>
#include <iostream>
#include <vector>

//Exercise:
// 1.)Schreibe eine Funktion, die einen double-Vector mit aufsteigenden double-Werten befüllt
// => zb [0.0, 0.1...] bei einem input-vektor der länge 6
// void fill_double_vector(std::vector<double> &vec)

// 2.) Schreibe eine Funktion, die die Werte eines double-Vectos in der Konsole ausgibt
// void print_double_vector(const std::vector<double> &vec)

// 3.) Schreibe Funktionen, die die -Exponential - Natural Logarithm Werte von einem double-vector berechnet
// void double_vector_exp(std::vector<double> &vec)
// verwendet std::exp, std::log aus <cmath>
// [exp(0.0), exp(1.0), ...]
// [log(0.0), log(1.0), ...]

void fill_double_vector(std::vector<double> &vec)
{

    for (std::size_t i = 0; i < vec.size(); ++i)
    {
        vec[i] = static_cast<double>(i);
    }
}


void print_double_vector(const std::vector<double> &vec)
{

    for (std::size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << "Index: " << i << " Value: " << vec[i] << std::endl;
    }
}


void double_vector_exp(std::vector<double> &vec)
{
    for (std::size_t i = 0; i < vec.size(); ++i)
    {
        vec[i] = std::exp(vec[i]);
    }
}


void double_vector_log(std::vector<double> &vec)
{
    for (std::size_t i = 0; i < vec.size(); ++i)
    {
        vec[i] = std::log(vec[i]);
    }
}


int main()
{
    std::vector<double> double_vector(6, 0.0);

    fill_double_vector(double_vector);
    std::cout << "-------------------" << std::endl;
    print_double_vector(double_vector);
    std::cout << "-------------------" << std::endl;
    double_vector_exp(double_vector);
    print_double_vector(double_vector);
    std::cout << "-------------------" << std::endl;
    double_vector_log(double_vector);
    print_double_vector(double_vector);
    std::cout << "-------------------" << std::endl;


    return 0;
}
