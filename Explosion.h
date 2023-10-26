#ifndef EXPLOSION_H
#define EXPLOSION_H
#include <tuple>
#include "GameEntity.h"
#include "Effect.h"
class Explosion : public GameEntity, public Effect{
private:
std::tuple<int, int> position;
char type;
public:
Explosion(int x, int y):GameEntity(x, y, 'E'){};

virtual void apply(GameEntity& entity){
entity.setPos(-1, -1);
entity.setType('X');
}
virtual void move(int dx, int dy){

}
};
#endif