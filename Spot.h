#ifndef SPOT_H
#define SPOT_H
#include <tuple>
class Spot{
private:
std::tuple<int, int> location;
char category;
bool operative;
public:
Spot(int x, int y, char category){
location = {x,y};
Spot::category = category;
operative = true;
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
virtual void shift(int dx, int dy){
setLoc(std::get<0>(getLoc()) + dx, std::get<1>(getLoc()) + dy);
}
virtual void implement(Spot& spot){
    spot.setCategory('S');
    operative = false;
}
};
#endif