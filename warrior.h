#ifndef WARRIOR_H
#define WARRIOR_H
#include <string>
#include "player.h"

class Warrior : public Player{

protected:
std::string weapon;

public:

Warrior(std::string name, int health, int damage, std::string weapon);
void swingWeapon(Player * opponenet);
std::string get_weapon();
std::string set_weapon(std::string weapon);
};
#endif 