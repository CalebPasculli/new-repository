#include "Car.h"

Car::Car(){
price = 0;
emissions = 0;
}
Car::Car(int price){
Car::price = price;
emissions = 0;
}

int Car::get_price(){
return(price);
}
void Car::set_price(int price){
   Car::price = price;
}

int Car::get_emissions(){
return(emissions);
}
void Car::set_emissions(int emissions){
    Car::emissions = emissions;
}