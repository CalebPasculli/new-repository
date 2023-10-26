#ifndef ASSISTS_H
#define ASSISTS_H
#include <tuple>
#include <cstdlib>
#include <time.h>
#include <cmath>
class Assists{
public:
static std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight){
srand(time(0));
std::tuple<int, int> loc = {rand()%matrixWidth, rand()%matrixHeight};
return(loc);
}
static double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2){
    double distance = sqrt(pow(std::get<0>(loc2)- std::get<0>(loc1),2)+pow(std::get<1>(loc2)- std::get<1>(loc1),2)); 
    return(distance); 
}

};
#endif