#include <string>
#include <iostream>
#include "StoreShelf.h"

int main(){
    StoreShelf shelf1;
    std::cout << shelf1.get_num_music_boxes() <<"\n";

    MusicBox box1 = MusicBox("song", 2);

    StoreShelf shelf2 = StoreShelf(10);

    

    
    return 0;
}
