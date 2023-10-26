#include "Spot.h"
Spot::Spot(int x, int y, char category){
location = {x,y};
Spot::category = category;
}
Spot::Spot(): Spot(0,0,'X'){}

std::tuple<int, int> Spot::getLoc(){
    return(location);
}
char Spot::getCategory(){
    return(category);
}
void Spot::setLoc(int x, int y){
    location = {x,y};
}
void Spot::setCategory(char category){
    Spot::category = category;
}