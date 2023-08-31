#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(int ID){
Vehicle::ID = ID;
timeOfEntry = std::time(NULL);
std::cout << timeOfEntry << "\n";
}

int Vehicle::getID(){
return(ID);
}

