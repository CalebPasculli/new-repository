#include "vehicle.h"
#include "car.h"
#include "motorbike.h"
#include "bus.h"
#include <iostream>
int main(){
int c, m, b;

std::cin >> c;
std::cin >> m;
std::cin >> b;

Vehicle * array[c+m+b];

for(int i = 0; i < c; i++){
    array[i] = new Car(i);
}
for(int i = c; i < c+m; i++){
    array[i] = new Motorbike(i);
}
for(int i = c+m; i < c+m+b; i++){
    array[i] = new Bus(i);
}

for(int i = 0; i < c+m+b; i++){
    int val = array[i]->getParkingDuration();
    int id = array[i]->getID();
    std::cout << val << " "<< id<< "\n";
}
}