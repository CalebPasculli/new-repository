#include "Car.h"
#include "Tesla.h"
#include <iostream>
int main(){
    Tesla t1('S', 1000);

    std::cout << "model: " << t1.get_model() << "\n";
    std::cout << "price: " << t1.get_price() << "\n";
    std::cout << "emissions: " << t1.get_emissions() << "\n";
    std::cout << "percentage: " << t1.get_batteryPercentage() << "\n\n\n";

    t1.drive(1000);

    std::cout << "emissions: " << t1.get_emissions() << "\n";
    std::cout << "percentage: " << t1.get_batteryPercentage() << "\n\n\n";

    t1.chargeBattery(10);
    std::cout << "percentage: " << t1.get_batteryPercentage() << "\n";
 
   return 0;
}