#include "Musician.h"
Musician::Musician(){
    instr = "null";
    exper = 0;
}
Musician::Musician(std::string instrument, int experience){
    instr = instrument;
    exper = experience;
}
std::string Musician::get_instrument(){
    return(instr);
}
int Musician::get_experience(){
    return(exper);
}
