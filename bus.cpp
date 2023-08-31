#include "bus.h"
#include "vehicle.h"


int Bus::getParkingDuration(){
int result;

result = (time(NULL) - timeOfEntry) * 0.75;
return(result);
}