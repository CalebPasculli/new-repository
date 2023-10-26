#ifndef UTILS_H
#define UTILS_H
#include <tuple>
#include <cstdlib>
#include <time.h>
#include <cmath>
class Utils{
private:
public:
static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
    srand(time(0));
    int x = rand() % gridWidth;
    int y = rand() % gridHeight;
    std::tuple<int, int> pos = {x,y};
    return(pos);
}
static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
double distance = sqrt(pow((std::get<0>(pos2) - std::get<0>(pos1)), 2)+pow((std::get<1>(pos2) - std::get<1>(pos1)), 2));
return(distance);
}
};
#endif