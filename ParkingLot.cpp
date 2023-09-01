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
        std::cout << "The lot is full";
    }else{
        int state = 0;
        while (state == 0){
            for (int i = 0; i < maxVehicles; i++){
                if (vehicles[i] == nullptr){
                    vehicles[curVehicles] = Vehicle;
                    curVehicles++;
                    state == 1;
                }
            }
        }
    }
}
void ParkingLot::unparkVehicle(int ID){
int state = 0;
while (state == 0){
for (int i = 0; i < maxVehicles; i++){
        if (vehicles[i]->getID() == ID){
            vehicles[i] = nullptr;
            state == 1;
        }
    }
    std::cout << "Vehicle not in the lot";
}

}