#ifndef CAR_H
#define CAR_H
#include "vehicle.h"
class Car:Vehicle {
protected:

public:
Car(int id);
int getParkingDuration();
};
#endif