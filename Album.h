//

#ifndef SOLUTION_ALBUM_H
#define SOLUTION_ALBUM_H
#include "Track.h"

class Album
{

private:
    std::string title;
    std::string artist;
    int dynamic_array_of_track;
public:
    Album(const std::string name, const std::string artists, int dynamicArrayOfTrack) ;

    Album();

    Album(const Album& source);

    void printAlbum();

    void printArtist();

    void printNumberOfTracks();

    ~Album() ;

    friend std::ostream& operator << (std::ostream& out, const Album& c);
};
#endif //SOLUTION_ALBUM_H
