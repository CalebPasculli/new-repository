#ifndef SPOT_H
#define SPOT_H
#include <tuple>
class Spot{
public:
std::tuple<int, int> location;
char category;
private:
Spot(int x, int y, char category);
Spot();
std::tuple<int, int> getLoc();
char getCategory();
void setLoc(int x, int y);
void setCategory(char category);
};
#endif