#include "Appliance.h"
#include "Fridge.h"
#include <iostream>
Fridge::Fridge():Appliance(){
volume = 0;
}
Fridge::Fridge(int powerRating, double volume):Appliance(powerRating){
    Fridge::volume = volume;
}

void Fridge::setVolume(double volume){
    Fridge::volume = volume;
}
double Fridge::getVolume(){
    return (volume);
}

double Fridge::getPowerConsumption(){
    int powerConsumption;
    powerConsumption = Fridge::powerRating * 24 * (Fridge::volume/100);
    return(powerConsumption);
}