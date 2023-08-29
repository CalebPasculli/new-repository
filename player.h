#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{

protected:
std::string name;
int health;
int damage;

public:
Player(std::string name, int health, int damage);
void attack(Player * opponent, int damage);
void takeDamage(int damage);

std::string getName();

int getHealth();

int setHealth(int health);

int getDamage();

int setDamage(int damage);

};

#endif