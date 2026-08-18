#include "../include/Timeline.h"

Timeline::Timeline() {}

Timeline::~Timeline() {
    for (Track* track : tracks) {
        delete track;
    }
}

void Timeline::addTrack(Track* track) {
    tracks.push_back(track);
}

double Timeline::totalDuration() const {
    double total = 0.0;
    for (Track* track : tracks) {
        for (MediaAsset* asset : track->getAssets()) {
            total += asset->getDuration();
        }
    }
    return total;
}

double Timeline::totalRenderCost() const {
    double total = 0.0;
    for (Track* track : tracks) {
        for (MediaAsset* asset : track->getAssets()) {
            total += asset->renderCost();
        }
        for (Effect* effect : track->getEffects()) {
            total += effect->renderCostAdd();
        }
    }
    return total;
}