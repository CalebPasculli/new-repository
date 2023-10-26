#ifndef SPOT_H
#define SPOT_H
#include <tuple>
class Spot{
private:
std::tuple<int, int> location;
char category;
public:
Spot(int x, int y, char category){
location = {x,y};
Spot::category = category;
}
Spot(): Spot(0,0,'X'){}

std::tuple<int, int> getLoc(){
    return(location);
}
char getCategory(){
    return(category);
}
void setLoc(int x, int y){
    location = {x,y};
}
void setCategory(char category){
    Spot::category = category;
}
};
#endif