#include "car.h"
#include <iostream>

Car::Car()
{
    std::cout << "\nCar constructor invoked" << std::endl;
}

void Car::GetPrivateParentsMembers()
{
    std::cout << "\n Vehicle private members are:" << Make << "\t" << Color << std::endl; //ERROR members is private
}
