#ifndef TRACK_H
#define TRACK_H

#include <vector>
#include "MediaAsset.h"
#include "Effect.h"

class Track {
private:
    std::vector<MediaAsset*> assets;
    std::vector<Effect*> effects;

public:
    Track();
    ~Track(); // must clean up everything it owns

    void addAsset(MediaAsset* asset);
    void addEffect(Effect* effect);

    const std::vector<MediaAsset*>& getAssets() const;
    const std::vector<Effect*>& getEffects() const;
};

#endif