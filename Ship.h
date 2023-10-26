#ifndef SHIP_H
#define SHIP_H
#include "GameEntity.h"
#include <tuple>
class Ship : public GameEntity{
private:
public:
Ship(int x, int y) : GameEntity(x, y, 'S'){};
virtual void move(int dx, int dy){
    Ship::setPos(std::get<0>(getPos()) + dx,std::get<1>(getPos()) + dy);
}
};
#endif