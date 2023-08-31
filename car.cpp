#include "car.h"
#include "vehicle.h"

Car(int id) : {
}

int Car::getParkingDuration(){
int result;

result = (time(NULL) - timeOfEntry) * 0.9;
return(result);
}