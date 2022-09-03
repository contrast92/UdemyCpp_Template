#include <iostream>

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

void print_vehicle_data(Vehicle &vehicle)
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


// when giving a pointer from a struct you need to use the -> operator instead of .notation

void print_vehicle_data_pointer(Vehicle *vehicle)
{
    std::cout << "Vehicle ID: " << vehicle->id << std::endl;
    std::cout << "Vehicle velocity [kph]: " << vehicle->velocity << std::endl;

    switch (vehicle->lane)
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
    Vehicle v2 = {.id = 2, .velocity = 102.0f, .lane = VehicleLane::LEFT_LANE};

    print_vehicle_data(v2);
    print_vehicle_data(v1);

    // When the function is using a pointer in the variable declaration,
    // you need to give the memory address to the function
    print_vehicle_data_pointer(&v2);
    print_vehicle_data_pointer(&v1);

    return 0;
}
