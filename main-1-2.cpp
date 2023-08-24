#include <string>
#include <iostream>
#include "StoreShelf.h"

int main(){
    
    StoreShelf shelf1;

    MusicBox box1 = MusicBox("song", 2);

    StoreShelf shelf2 = StoreShelf(10);
    bool result = shelf2.add_music_box(box1);
    std::cout << result;

    MusicBox * array = shelf2.get_contents();

    return 0;
}
