#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"
#include <iostream>
int main(){
    House h1;
    std::cout << h1.getTotalPowerConsumption() << "\n";

    House h2(3);
    TV * t1 = new TV(2, 50);
    Fridge * f1 = new Fridge(2, 1000);
    Fridge * f2 = new Fridge(3, 10);

    std::cout << h2.addAppliance(t1) << "\n";
    std::cout << h2.addAppliance(f1) << "\n";
    std::cout << h2.addAppliance(f2) << "\n";


    std::cout << h2.getTotalPowerConsumption() << "\n";

    return 0;
}