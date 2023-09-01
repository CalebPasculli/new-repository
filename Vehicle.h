#ifndef VEHICLE_H
#define VEHICLE_H
#include <ctime>
class Vehicle{
protected:
std::time_t timeOfEntry;
int ID;
public:
Vehicle();
Vehicle(int ID);
virtual int getID();

virtual int getParkingDuration();
};
#endif