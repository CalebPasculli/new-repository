#ifndef SNARE_H
#define SNARE_H
#include "Spot.h"
#include "Influence.h"
class Snare : public Spot, public Influence{
private:
bool operative;
public:
Snare(int x, int y): Spot(x, y, 'S'){
    operative = true;
}
Snare():Snare(0,0){}
bool isOperative(){
    return(operative);
}
virtual void implement(Spot& spot){
    spot.setCategory('S');
    operative = false;
}
virtual void shift(int dx, int dy){
setLoc(std::get<0>(getLoc()) + dx, std::get<1>(getLoc()) + dy);
}
};
#endif