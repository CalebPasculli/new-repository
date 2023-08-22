#ifndef ORCHESTRA_H
#define ORCHESTRA_H
#include <string>
#include "Musician.h"
class Orchestra{
    private:

    int o_size;
    int no_members = 0;
    Musician * array;

    public:
    Orchestra();
    Orchestra(int size);
    int get_current_number_of_members(); 
    bool has_instrument(std::string instrument); 
    Musician *get_members(); 
    bool add_musician(Musician new_musician);
    ~Orchestra();
};
#endif