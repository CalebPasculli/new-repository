#ifndef FORD_H
#define FORD_H
#include "Car.h"
class Ford : public Car{
    protected:
    int badgeNumber;
    float litresOfFuel;
    public:
    Ford();            
    Ford(int badgeNumber, int price);
    void set_badgeNumber(int badgeNumber);
    int get_badgeNumber();
    void set_litresOfFuel(int litresOfFuel);
    int get_litresOfFuel();
    void refuel(int litres);            
    void drive(int kms);   
};
#endif