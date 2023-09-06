#include "Appliance.h"
#include "Fridge.h"
#include <iostream>
int main(){
    Fridge f1;
    std::cout << f1.get_isOn() << "\n";
    std::cout << f1.getVolume() << "\n";
    std::cout << f1.getPowerConsumption() << "\n \n";

    double volume = 10;
    int powerRating = 3;
    Fridge f2(powerRating, volume);

    std::cout << f2.get_isOn() << "\n";
    std::cout << f2.getVolume() << "\n";
    std::cout << f2.getPowerConsumption() << "\n";

    return 0;
}