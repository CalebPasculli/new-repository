#ifndef GAME_H
#define GAME_H
#include <vector>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Ship.h"
#include "Explosion.h"
#include "Mine.h"
#include <iostream>
#include <tuple>
class Game{
private:
std::vector<GameEntity*> entities;
public:
GameEntity* get_entities(int i){
    return (entities[i]);
}
void set_entities(GameEntity* entity, int i){entities[i] = entity;}

std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
    entities.resize(numShips + numMines);
    for (int i = 0; i < numShips; i++){
        entities.push_back(new Ship(std::get<0>(Utils::generateRandomPos(gridWidth, gridHeight)),std::get<1>(Utils::generateRandomPos(gridWidth, gridHeight))));
    }
    for (int i = 0; i < numMines; i++){
        entities.push_back(new Mine(std::get<0>(Utils::generateRandomPos(gridWidth, gridHeight)),std::get<1>(Utils::generateRandomPos(gridWidth, gridHeight))));
    }
}

void gameLoop(int maxIterations, double mineDistanceThreshold){
    int shipCount = 0;
    for (int i = 0; i < std::size(entities); i++){
        if(entities[i]->getType() == 'S'){
            shipCount++;
        }
    }
    while(shipCount > 0){
        for (int i = 0; i < std::size(entities); i++){
            if(entities[i]->getType() == 'S'){
                 entities[i]->move(0,1);
            }
        }
        for (int i = 0; i < std::size(entities); i++){
            if(entities[i]->getType() == 'S'){

                if(Utils::calculateDistance(std::get<0>(entities[i]->getPos()), std::get<0>(entities[i]->getPos()) ))
                
            }
        }
    }
}
};
#endif