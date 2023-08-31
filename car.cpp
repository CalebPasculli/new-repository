#include "car.h"
#include "vehicle.h"

Car::Car():Vehicle(ID){
Car::ID = 0;
timeOfEntry = std::time(NULL);
}

Car::Car(int ID):Vehicle(ID){
Car::ID = ID;
timeOfEntry = std::time(NULL);
}

int Car::getParkingDuration(){
int result;

result = (time(NULL) - timeOfEntry) * 0.9;
return(result);
}