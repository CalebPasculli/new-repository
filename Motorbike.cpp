#include "motorbike.h"
#include "vehicle.h"
#include <iostream>
Motorbike::Motorbike():Vehicle(ID){
Motorbike::ID = 0;
timeOfEntry = std::time(NULL);
}

Motorbike::Motorbike(int ID):Vehicle(ID){
Motorbike::ID = ID;
Motorbike::timeOfEntry = std::time(NULL);
}


int Motorbike::getParkingDuration(){
int result;
result = int((std::time(NULL) - timeOfEntry)) * 0.85;
return(result);
}