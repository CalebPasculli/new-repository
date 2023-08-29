#include <string>
#include "wizard.h"
#include <iostream>

Wizard::Wizard(std::string name, int health, int damage, int mana):Player(name, health, damage){
    Wizard::mana = mana;
}

int Wizard::get_mana(){
    return(mana);
}

int Wizard::set_mana(int mana){
    Wizard::mana = mana;
}

void Wizard::castSpell(Player * opponent){
    std::cout << name << " casts a spell on " << opponent->getName() << " for " << mana << " damage.\n";
    opponent->takeDamage(mana);
}