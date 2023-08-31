#include "Bus.h"
#include "Vehicle.h"
Bus::Bus():Vehicle(ID){
    Bus::ID = 0;
    timeOfEntry = std::time(NULL);
}

Bus::Bus(int ID):Vehicle(ID){
    Bus::ID = ID;
    timeOfEntry = std::time(NULL);
}

int Bus::getParkingDuration(){
int result;

result = (time(NULL) - timeOfEntry) * 0.75;
return(result);
}