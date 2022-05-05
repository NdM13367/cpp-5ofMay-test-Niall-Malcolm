#include "Album.h"

#include <iostream>
#include <string>

using namespace std;

Album::Album(string title, string artists, int tracks) {
    this->title = title;
    this->artist = artists;
    this->dynamic_array_of_track = tracks;
}

Album::Album()
{
    this->title = "MGRR OST";
    this->artist = "Jaime Christopherson";
    this->dynamic_array_of_track = 0;
}

Album::Album(const Album &source) {
    cout << "... Album Copy Constructor was called." << endl;
    this->title = source.title;
    this->artist = artist;
    this->dynamic_array_of_track = source.dynamic_array_of_track;
}

void Album::printAlbum() {
    cout << this->title << endl;
}

void Album::printArtist() {
    this->artist = artist;
}

void Album::printNumberOfTracks() {
    this->dynamic_array_of_track = dynamic_array_of_track;
}

Album::~Album() {
    cout << "... Album Destructor ~Album() was called." << endl;

    delete this->title;
}

ostream& operator<< (ostream& out, const Album& album)
{
    out << "Name: " << album.title << endl;
    out << "Location - Latitude : "  << album.artist << endl;
    out << "Location - Longitude: "  << album.dynamic_array_of_track << endl;

    return out;
}
