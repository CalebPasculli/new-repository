#include "Musician.h"
#include "Orchestra.h"
#include <iostream>
Orchestra::Orchestra(){
    o_size = 0;
    no_members = 0;
}

Orchestra::Orchestra(int size){
    o_size = size;
    array = new Musician [size];
}

int Orchestra::get_current_number_of_members(){
    return(no_members);
}


bool Orchestra::has_instrument(std::string instrument){
    for (int i = 0; i < no_members; i++)
    {
        if (array[i].get_instrument() == "instrument")
        {
            return true;
        }
    }
    return false;   
}

Musician * Orchestra::get_members(){
return(array);
}

bool Orchestra::add_musician(Musician new_musician){
if (no_members < o_size){
    array[no_members] = new_musician;
    no_members++;
    return true;
}
return false;

}

Orchestra::~Orchestra(){

}