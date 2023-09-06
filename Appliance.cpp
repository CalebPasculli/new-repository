#include "Appliance.h"
#include <iostream>
Appliance::Appliance(){
    powerRating = 0;
    isOn = false;
}

Appliance::Appliance(int powerRating){
    Appliance::powerRating = powerRating;
    isOn = false;
}

void Appliance::turnOn(){
    isOn = true;
}
void Appliance::turnOff(){
    isOn = false;
}


bool Appliance::get_isOn(){
    return(isOn);
}

void Appliance::set_isOn(bool state){
    Appliance::isOn = state;
}
