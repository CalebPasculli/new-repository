#include "Appliance.h"
#include "TV.h"
#include <iostream>
int main(){
    TV t1;
    std::cout << t1.get_isOn() << "\n";
    std::cout << t1.getScreenSize() << "\n";
    std::cout << t1.getPowerConsumption() << "\n \n";

    double screenSize = 100;
    int powerRating = 3;
    TV t2(powerRating, screenSize);

    std::cout << t2.get_isOn() << "\n";
    std::cout << t2.getScreenSize() << "\n";
    std::cout << t2.getPowerConsumption() << "\n";

    return 0;
}