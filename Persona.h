#ifndef PERSONA_H
#define PERSONA_H
#include "Spot.h"
#include <tuple>
class Persona : public Spot{
public:
Persona(int x, int y):Spot(x, y, 'P'){}
void shift(int dx, int dy){
setLoc(std::get<0>(getLoc()) + dx, std::get<1>(getLoc()) + dy);
}
};
#endif