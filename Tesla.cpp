#include "Car.h"
#include "Tesla.h"
#include <iostream>
Tesla::Tesla(): Car(){
    model = ' ';
    batteryPercentage = 100;
}        
Tesla::Tesla(char model, int price): Car(price){
    Tesla::model = model;
    Tesla::batteryPercentage = 100;
} 

void Tesla::set_model(char model){
    Tesla::model = model;
}
char Tesla::get_model(){
    return(model);
}
void Tesla::set_batteryPercentage(float batteryPercentage){
    if(batteryPercentage > 0){
        if(batteryPercentage < 100 ){
            Tesla::batteryPercentage = batteryPercentage; 
        }else{
            Tesla::batteryPercentage = 100;
        }
    }else{
        Tesla::batteryPercentage = 0;
    }

}
float Tesla::get_batteryPercentage(){
    return(batteryPercentage);
}
void Tesla::chargeBattery(int mins){
    float percent = (mins * 0.5) + (Tesla::get_batteryPercentage());
    Tesla::set_batteryPercentage(percent);
}        
void Tesla::drive(int kms){
    int emissions;
    float percent;
    float driven;
    driven = Tesla::get_batteryPercentage() * 5 - kms;
    if (driven < 0){
        kms = get_batteryPercentage() * 5;
    }

    std::cout <<"TEST KMS"<< kms << "\n";
    emissions = (kms * 74);
    percent = get_batteryPercentage() - (kms * 0.2);
    Tesla::set_emissions(kms * 74);
    Tesla::set_batteryPercentage(percent);
}