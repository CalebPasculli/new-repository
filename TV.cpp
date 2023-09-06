#include "Appliance.h"
#include "TV.h"

TV::TV():Appliance(){
screenSize = 0;
}
TV::TV(int powerRating, double screenSize):Appliance(powerRating){
    TV::screenSize = screenSize;
}

void TV::setScreenSize(double screenSize){
    TV::screenSize = screenSize;
}
double TV::getScreenSize(){
    return (screenSize);
}

double TV::getPowerConsumption(){
    int powerConsumption;
    powerConsumption = TV::powerRating * (TV::screenSize/10);
    return(powerConsumption);
}