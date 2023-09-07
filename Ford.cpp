#include "Ford.h"
#include "Car.h"
Ford::Ford(): Car(){
    badgeNumber = 0;
    litresOfFuel = 60;
}            
Ford::Ford(int badgeNumber, int price):Car(price){
    Ford::badgeNumber = badgeNumber;
    litresOfFuel = 60;
}
void Ford::set_badgeNumber(int badgeNumber){
    Ford::badgeNumber = badgeNumber;
}
int Ford::get_badgeNumber(){
    return(badgeNumber);
}
void Ford::set_litresOfFuel(float litresOfFuel){
    Ford::litresOfFuel = litresOfFuel;
    if(litresOfFuel > 0){
        if(litresOfFuel < 60){
            Ford::litresOfFuel = litresOfFuel; 
        }else{
            Ford::litresOfFuel = 60;
        }
    }else{
        Ford::litresOfFuel = 0;
    }
}
float Ford::get_litresOfFuel(){
    return(litresOfFuel);
}
void Ford::refuel(float litres){
    Ford::set_litresOfFuel(litres  + Ford::get_litresOfFuel());
}            
void Ford::drive(int kms){
    int emissions;
    float litres;
    float driven;
    driven = Ford::get_litresOfFuel() * 5 - kms;
    if (driven < 0){
        kms = Ford::get_litresOfFuel() * 5;
        kms = 260;
    }

    emissions = (kms * 234);
    litres = get_litresOfFuel() - (kms * 0.2);
    Ford::set_emissions(emissions);
    Ford::set_litresOfFuel(litres);
}  