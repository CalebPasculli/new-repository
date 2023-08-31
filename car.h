#ifndef CAR_H
#define CAR_H
#include "vehicle.h"
class Car: public Vehicle {
protected:

public:
Car();
Car(int ID);
int getParkingDuration();
};
#endif