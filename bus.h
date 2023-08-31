#ifndef BUS_H
#define BUS_H
#include "vehicle.h"
class Bus: public Vehicle {
protected:

public:
Bus();
Bus(int ID);
int getParkingDuration();
};
#endif