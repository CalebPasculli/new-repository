#include "Vehicle.h"
#include <iostream>
Vehicle::Vehicle(){
    ID = 0;
    timeOfEntry = 0;
}
Vehicle::Vehicle(int ID){
Vehicle::ID = ID;
timeOfEntry = std::time(NULL);
}

int Vehicle::getID(){
return(ID);
}

int Vehicle::getParkingDuration(){
int result;

result = (time(NULL) - timeOfEntry);
return(result);
}

