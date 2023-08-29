#ifndef WIZARD_H
#define WIZARD_H
#include <string>
#include "player.h"

class Wizard : public Player{

protected:
int mana;

public:


Wizard(std::string name, int health, int damage, int mana);
void castSpell(Player * opponenet);
int get_mana();
int set_mana(int mana);
};
#endif