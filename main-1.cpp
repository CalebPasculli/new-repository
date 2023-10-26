#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include <iostream>
#include <tuple>
int main(){
    Utils u;
    std::tuple<int,int> point1 = u.generateRandomPos(50,50);
    std::cout<< "x: " <<std::get<0>(point1) << " y: " << std::get<1>(point1) << std::endl;

    std::tuple<int,int> point2 = u.generateRandomPos(5,5);
    std::cout <<std::get<0>(point2) << " y: " << std::get<1>(point2)<< std::endl;

    double distance = u.calculateDistance(point1, point2);
    std::cout <<distance<< std::endl;
    return 0;
}