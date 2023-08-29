#include "player.h"
#include <string>
#include <iostream>
Player::Player(std::string name, int health, int damage){
    Player::name = name;
    Player::health = health;
    Player::damage = damage;
}
void Player::attack(Player * opponent, int damage){
opponent->health = opponent->health - damage;
}
void Player::takeDamage(int damage){
health = health - damage;
std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";

}

std::string Player::getName(){
    return(name);
}

int Player::getHealth(){
    return (health);
}

int Player::setHealth(int health){
    Player::health = health;
}

int Player::getDamage(){
    return(damage);
}

int Player::setDamage(int damage){
    Player::damage = damage;
}



