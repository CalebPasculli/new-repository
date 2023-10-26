#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <tuple>
class GameEntity{
private:
std::tuple<int, int> position;
char type;
public:
GameEntity(int x, int y, char type){
    GameEntity::position = {x, y};
    GameEntity::type = type;
}
GameEntity():GameEntity(0, 0, 'x'){};

std::tuple<int, int> getPos(){
    return(position);
}
char getType(){
    return(type);
}
void setType(char t){
    type = t;
}
void setPos(int x, int y){
    position = {x,y};
}
virtual void move(int dx, int dy)= 0;
};
#endif