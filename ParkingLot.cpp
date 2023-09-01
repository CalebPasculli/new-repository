#include "Vehicle.h"
#include "ParkingLot.h"
#include <iostream>
ParkingLot::ParkingLot(){
maxVehicles = 0;
curVehicles = 0;
vehicles = new Vehicle*[0];
}

ParkingLot::ParkingLot(int maxSize){
    maxVehicles = maxSize;
    curVehicles = 0;
    vehicles = new Vehicle*[maxSize];
    for (int i = 0; i < maxSize; i++)
    {
        vehicles[i] = nullptr;
    }
}

int ParkingLot::getCount(){
    return(curVehicles);
}
void ParkingLot::parkVehicle(Vehicle * Vehicle){

    if(ParkingLot::getCount() == maxVehicles){
        std::cout << "The lot is full\n";
    }else{
                    vehicles[curVehicles] = Vehicle;
                    curVehicles++;
        }
}
void ParkingLot::unparkVehicle(int ID) {
    bool vehicleFound = false;
    for (int i = 0; i < curVehicles; i++) {
        if (vehicles[i] != nullptr && vehicles[i]->getID() == ID) {
            delete vehicles[i];
            vehicles[i] = nullptr;
            curVehicles--;
            vehicleFound = true;
            break;
        }
    }

    if (!vehicleFound) {
        std::cout << "Vehicle not found in the lot\n";
    }
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration){
    int count = 0;
    for (int i = 0; i < curVehicles; i++){
        if(vehicles[i]->getParkingDuration() > maxParkingDuration){
            count++;
        }
    }
    return count;
}