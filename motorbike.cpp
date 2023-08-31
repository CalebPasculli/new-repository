#include "motorbike.h"
#include "vehicle.h"


int Motorbike::getParkingDuration(){
int result;

result = (time(NULL) - timeOfEntry) * 0.85;
return(result);
}