#ifndef MINE_H
#define MINE_H
#include "GameEntity.h"
#include "Explosion.h"
class Mine : public GameEntity{
private:
char type;
public:
Mine(int x, int y): GameEntity(x, y, 'M'){};
Explosion explode(){
    Explosion ex(std::get<0>(getPos()), std::get<1>(getPos()));
    setType('X');
    return(ex);
}
virtual void move(int dx, int dy){

}
};
#endif