#ifndef PLAY_H
#define PLAY_H
#include "Spot.h"
#include "Influence.h"
#include "Assists.h"
#include "Snare.h"
#include "Persona.h"
#include <tuple>
#include <vector>
#include <iostream>
class Play{
    private:
    std::vector<Spot*> matrix;
    public:
    Play(){
        matrix = {};
    }
    std::vector<Spot*>& getMatrix(){
        return(matrix);
    }
    void initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight){
        matrix.resize(numPersonas+numSnares);
        for (int i = 0; i < numPersonas; i++){
            matrix.push_back(new Persona(std::get<0>(Assists::createRandomLoc(matrixWidth, matrixHeight)), std::get<1>(Assists::createRandomLoc(matrixWidth, matrixHeight))));  
        }
        for (int i = numPersonas; i < numPersonas+numSnares; i++){
            matrix.push_back(new Snare(std::get<0>(Assists::createRandomLoc(matrixWidth, matrixHeight)), std::get<1>(Assists::createRandomLoc(matrixWidth, matrixHeight))));
        }
    }
    void playCycle(int maxCycles, double snareTriggerDistance){
        int personaCount = 0;
        for (int i = 0; i < 15; i++){
            if(matrix[i]->getCategory() == 'P'){
                personaCount++;
            }
            }
        int currPersona = personaCount;
        for(int k = 0; k < maxCycles; k++){
            for (int i = 0; i < currPersona; i++){
                matrix[i]->shift(0,1);
            }
            for (int i = 0; i < currPersona; i++){
                for (int j = currPersona; j < 15; j++){
                    if( Assists::evaluateDistance(matrix[i]->getLoc(),matrix[j]->getLoc()) == snareTriggerDistance){
                        matrix[j]->implement(*matrix[i]);
                        currPersona--;
                    }
                }
            }
        }
        std::cout << "Maximum number of cycles reached. Game over.";
    }
    };
#endif