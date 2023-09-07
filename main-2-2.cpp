#include "Car.h"
#include "Ford.h"
#include <iostream>
int main(){
    Ford t1(3, 1000);

    std::cout << "model: " << t1.get_badgeNumber() << "\n";
    std::cout << "price: " << t1.get_price() << "\n";
    std::cout << "emissions: " << t1.get_emissions() << "\n";
    std::cout << "percentage: " << t1.get_litresOfFuel() << "\n\n\n";

    t1.drive(10);

    std::cout << "emissions: " << t1.get_emissions() << "\n";
    std::cout << "percentage: " << t1.get_litresOfFuel() << "\n\n\n";

    t1.refuel(10);
    std::cout << "percentage: " << t1.get_litresOfFuel() << "\n";
    return 0;
}