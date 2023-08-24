#include <string>
#include "MusicBox.h"

MusicBox::MusicBox(){
boxWidth = 0;
boxSong = "";
};
MusicBox::MusicBox(std::string songname, int width){
boxWidth = width;
boxSong = songname;
};
std::string MusicBox::get_song(){
return(boxSong);
};
int MusicBox::get_width(){
return(boxWidth);
};
MusicBox::~MusicBox(){

};