#ifndef CAR_H
#define CAR_H

#include <vehicle.h>

class Car : public Vehicle
{
public:
    Car();
    void GetPrivateParentsMembers();
};

#endif // CAR_H
