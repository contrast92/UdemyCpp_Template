#include <iostream>

// Use constexpr instead of define !
// #define NUM_VEHICLES 3

// Const int, short, long, char = same in constexpr (processed at compile time)
// float, double is not processed at compile time
// Use constexpr for variables, to be sure the variable is always processed!!

constexpr int DEFAULT_VEHICLE_ID = -1;
constexpr unsigned int NUM_VEHICLES = 3;

// CONST is used for variables that are not allowed to be changed
// const& = READONLY !!

enum class VehicleLane
{
    RIGHT_LANE,
    CENTER_LANE,
    LEFT_LANE
};

struct Vehicle
{
    int id;
    float velocity;
    VehicleLane lane;
};


// const keyword defines, that we only read the data from vehicle and not write to it
void print_vehicle_data(const Vehicle &vehicle)
{
    std::cout << "Vehicle ID: " << vehicle.id << std::endl;
    std::cout << "Vehicle velocity [kph]: " << vehicle.velocity << std::endl;

    switch (vehicle.lane)
    {
    case VehicleLane::CENTER_LANE:
    {
        std::cout << "Vehicle lane association: Center Lane " << std::endl;
        break;
    }
    case VehicleLane::LEFT_LANE:
    {
        std::cout << "Vehicle lane association: Left Lane " << std::endl;
        break;
    }
    case VehicleLane::RIGHT_LANE:
    {
        std::cout << "Vehicle lane association: Right Lane " << std::endl;
        break;
    }
    default:
    {
        break;
    }
    }
}

int main()
{
    //defining Object from struct pre c++20
    Vehicle v1 = {1, 100.0f, VehicleLane::CENTER_LANE};

    //defining Object from struct post c++20
    Vehicle v2 = {.id = 2, .velocity = 130.0f, .lane = VehicleLane::LEFT_LANE};
    Vehicle v3 = {.id = 3, .velocity = 90.0f, .lane = VehicleLane::RIGHT_LANE};

    Vehicle vehicles_in_scene[NUM_VEHICLES] = {v1, v2, v3};


    for (int i = 0; i < NUM_VEHICLES; i++)
    {
        print_vehicle_data(vehicles_in_scene[i]);
    }


    // When the function is using a pointer in the variable declaration,
    // you need to give the memory address to the function


    return 0;
}
