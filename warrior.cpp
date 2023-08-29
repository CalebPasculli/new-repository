#include <string>
#include "warrior.h"
#include "player.h"
#include <iostream>
Warrior::Warrior(std::string name, int health, int damage, std::string weapon):Player(name, health, damage){
    Warrior::weapon = weapon;
}

void Warrior::swingWeapon(Player * opponent){
std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
opponent->takeDamage(damage);
}

std::string Warrior::get_weapon(){
    return(weapon);
}

std::string Warrior::set_weapon(std::string weapon){
    Warrior::health = health;
}