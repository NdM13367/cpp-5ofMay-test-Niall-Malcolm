//
// Question 1 code

#include "Track.h"

Track::Track(): title("A Stranger I Remain"), duration(319) {}

Track::Track(const std::string &title, int Duration):
        title(title),
        duration(Duration){}

const std::string & Track::getTitle() const {
    return title;
}

void Track::setTitle(const std::string &title) {
    Track::title = title;
}

int Track::getDuration() const {
    return duration;
}

void Track::setDuration(int Duration) {
    duration = Duration;
}

std::ostream &operator<<(std::ostream &os, const Track &track) {
    os << "title: " << track.title
       << " duration: " << track.duration;
    return os;
}

bool Track::operator<=(const Track &other) const {
    if( this->duration <= other.duration )
        return true;

    return false;
}
