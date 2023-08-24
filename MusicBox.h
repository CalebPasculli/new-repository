#define MUSICBOX.h
#ifdef MUSICBOX.h
#include <string>

class MusicBox{
    private:
    int boxWidth;
    std::string boxSong;
    public:
    MusicBox();
    MusicBox(std::string songname, int width);
    std::string get_song();
    int get_width();
    ~MusicBox();


};
#endif