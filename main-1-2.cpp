#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"
#include "ParkingLot.h"
#include <iostream>

int main(){
ParkingLot lot(10);
int type, num = 0, ID;

while (num < 10){
    std::cout << "Enter vehicle type 'Car' = 1, 'Bus' = 2, 'Motorbike' = 3: \n";
    std::cin >> type;
    if (type == 1){
    lot.parkVehicle(new Car(num));
    num++;
    std::cout << num << "\n";
    }else if(type == 2){
    lot.parkVehicle(new Bus(num));
    num++;
    std::cout << num << "\n";
    }else if(type == 3){
    lot.parkVehicle(new Motorbike(num));
    num++;
    std::cout << num << "\n";
    }
    std::cout << type << "\n";
}

std::cout << "Enter vehicle ID to unpark";
std::cin >> ID;

lot.unparkVehicle(ID);

}