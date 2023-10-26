#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Ship.h"
#include "Explosion.h"
#include "Mine.h"
#include <iostream>
#include <tuple>
int main(){
    Utils u;
    
    std::tuple<int,int> point1 = u.generateRandomPos(50,50);
    Ship s(std::get<0>(point1), std::get<1>(point1));
    s.move(0, 0);
    std::cout<< "x: " <<std::get<0>(s.getPos()) << " y: " << std::get<1>(s.getPos())<< std::endl;

    std::tuple<int,int> point2 = u.generateRandomPos(5,5);
    Mine m(std::get<0>(point2), std::get<1>(point2));
    m.explode();

    Explosion e(0, 0);

    e.apply(s);

    std::cout << s.getType();
    double distance = u.calculateDistance(point1, point2);
    std::cout <<distance<< std::endl;
    return 0;
}