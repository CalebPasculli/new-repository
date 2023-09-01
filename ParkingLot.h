#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
class ParkingLot{
protected:
int maxVehicles;
int curVehicles;
Vehicle** vehicles;
public:
ParkingLot();
ParkingLot(int maxSize);
int getCount();
void parkVehicle(Vehicle * Vehicle);
void unparkVehicle(int ID);
int countOverstayingVehicles(int maxParkingDuration);
};
#endif