//

#ifndef SOLUTION_TRACK_H
#define SOLUTION_TRACK_H
#include <iostream>
#include <string>

// Question 1 code

struct Track
{
    std::string title;
    int duration;

    Track();

    Track(const std::string &title, int Duration);

    const std::string &getTitle() const ;

    void setTitle(const std::string &title) ;

    int getDuration() const ;

    void setDuration(int Duration) ;

    friend std::ostream &operator<<(std::ostream &os, const Track &track);

    bool operator<(const Track &rhs) const;

    bool operator>(const Track &rhs) const;

    bool operator<=(const Track &rhs) const;

    bool operator>=(const Track &rhs) const;
};


#endif //SOLUTION_TRACK_H