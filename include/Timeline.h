#ifndef TIMELINE_H
#define TIMELINE_H

#include <vector>
#include "Track.h"

class Timeline {
private:
    std::vector<Track*> tracks;

public:
    Timeline();
    ~Timeline();

    void addTrack(Track* track);
    double totalDuration() const;
    double totalRenderCost() const;
};

#endif