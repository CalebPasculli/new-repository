#ifndef PLAY_H
#define PLAY_H
#include "Spot.h"
#include "Influence.h"
#include "Assists.h"
#include "Snare.h"
#include "Persona.h"
#include <tuple>
#include <vector>
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
            matrix[i] = new Persona(std::get<0>(Assists::createRandomLoc(matrixWidth, matrixHeight)), std::get<1>(Assists::createRandomLoc(matrixWidth, matrixHeight)));
        }
        for (int i = numPersonas; i < numPersonas+numSnares; i++){
            matrix[i] = new Snare(std::get<0>(Assists::createRandomLoc(matrixWidth, matrixHeight)), std::get<1>(Assists::createRandomLoc(matrixWidth, matrixHeight)));
        }
    }
    void playCycle(int maxCycles, double snareTriggerDistance){

        
    }
};
#endif