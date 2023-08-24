#include <string>
#include <iostream>
#include "MusicBox.h"

int main(){
    MusicBox box1;
    std::cout << box1.get_song() <<" "<< box1.get_width() <<"\n";

    MusicBox box2 = MusicBox("song", 10);
    std::cout << box2.get_song() <<" "<< box2.get_width()<<"\n";
    return 0;
}
