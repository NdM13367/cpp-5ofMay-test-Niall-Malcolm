#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Album.h"
#include "Track.h"
using namespace std;

/* Do Question 3a Here - loadAlbums() */

/* Do Question 3b Here - getLongestAlbum() */

/* Do Question 4a Here - ShiftRight() */

/* Do Question 4b Here - RemoveBetween() */


int main() {
    cout << "C++ CA3" << std::endl;

    Track track1("Rules of Nature", 371);

    cout << track1 << endl;

    Track track2("Red Sun",324);
    cout << track2 << endl;

    cout << "Compare track by duration of the song" << endl;
    cout << ((track1<=track2) ? "track1 is <= track2" : "track1 is > track2" )<< endl;

    /*  Test Question 2 here */

    cout << "Creating Student object s1" << endl;
    Album album1("Halo 3", "Marty O'Donnell", 24);
    cout << "album1 = " << endl;
    //album1.printAlbum();
    cout << album1 << endl;

    Album album2(album1);
    cout << "album album2(album1); calls the Copy constructor, so album2 = ";
    album2.printAlbum();

    Album album3 = album1;
    cout << "album album3 = album1;  - calls Copy Constructor, so album3 = ";
    album3.printAlbum();

    Album album4;
    album4 = album1;
    cout << "album4 = album1; calls overloaded assignment operator= , so album4 = ";
    album4.printAlbum();

    Album* pAlbum = new Album("Metal Gear Solid 2", "Harry Gregson Williams", 15);

    pAlbum->printAlbum();

    cout << "Print the dynamically allocated album using *pAlbum: " << *pAlbum << endl;

    delete pAlbum;

    /* Test Question 3a here */


    /* Test Question 3b here */



    //int *arr = new int[4]{6,3,2,4};
    /* Test Question 4a here */
    const int size = 4;
    int arr[size]={6,3,2,4};

    int last = arr[size - 1];
    for (int i = size - 1; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = last;

    //int *arr2 = new int[7]{8, 10, 17, 9, 14, 3, 8};
    /* Test Question 4b here */




    return 0;
}

