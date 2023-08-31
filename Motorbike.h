#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "Vehicle.h"
class Motorbike: public Vehicle {
protected:

public:
Motorbike();
Motorbike(int ID);
int getParkingDuration();
};
#endif