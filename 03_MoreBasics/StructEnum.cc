#include <cstdint>
#include <iostream>
#include <string>


enum class PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4
};

struct UserData
{
    std::string name;
    std::uint32_t id;
    PermissionLevel permission_level;
};

void greet_user(UserData &user)
{
    std::cout << user.name << " hast the id " << user.id << " and is a ";

    switch (user.permission_level)
    {
    case PermissionLevel::STUDENT:
    {
        std::cout << "STUDENT!\n";
        break;
    }

    case PermissionLevel::TUTOR:
    {
        std::cout << "TUTOR! \n";
        break;
    }

    case PermissionLevel::INSTRUCTOR:
    {
        std::cout << "INSTRUCTOR! \n";
        break;
    }

    case PermissionLevel::ADMIN:
    {
        std::cout << "ADMIN! \n";
        break;
    }

    default:
    {
        std::cout << "UNKNOWN STATE!\n";
        break;
    }
    }
}


int main()
{
    UserData malte = {"Malte", 30, PermissionLevel::STUDENT};

    greet_user(malte);

    return 0;
}
