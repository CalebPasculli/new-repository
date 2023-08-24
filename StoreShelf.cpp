#include <string>
#include "StoreShelf.h"
#include <iostream>
StoreShelf::StoreShelf(){
    shelfWidth = 0;
    numBoxes = 0;
};
StoreShelf::StoreShelf(int width){
    shelfWidth = width;
    numBoxes = 0;
    array = new MusicBox [10];
};


int StoreShelf::get_width(){
    return(shelfWidth);
};

// returns the number of Music boxes currently on the shelf
int StoreShelf::get_num_music_boxes(){
    return(numBoxes);
}; 

// returns a dynamic array of the music boxes currently on the shelf
MusicBox *StoreShelf::get_contents(){
    return(array);
};

// returns true and adds music box to shelf if there is sufficient space
// otherwise returns false
bool StoreShelf::add_music_box(MusicBox a_music_box){
if (shelfWidth - get_width() > 0){
    array[numBoxes] = a_music_box;
    numBoxes++;
    return(true);
}
return(false);
};
 
StoreShelf::~StoreShelf(){
 delete [] array; 
};