#include "Appliance.h"
#include "House.h"

House::House(){
    numAppliances = 0;
    currAppliances = 0;
    appliances[0];
}

House::House(int numAppliances){
    currAppliances = 0;
 House::numAppliances = numAppliances;
 appliances[numAppliances];
}

bool House::addAppliance(Appliance* appliance){
    if(currAppliances < numAppliances){
        appliances[currAppliances] = appliance;
        currAppliances++;
        return(true);
    }else{
        return(false);
    }
}

double House::getTotalPowerConsumption(){
    double sumConsumption = 0;
    for(int i = 0; i < currAppliances; i++){
        sumConsumption = sumConsumption + appliances[i]->getPowerConsumption();
    }
return(sumConsumption);
}