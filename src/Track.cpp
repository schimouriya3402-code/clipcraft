#include "../include/Track.h"

Track::Track() {}

Track::~Track() {
    for (MediaAsset* asset : assets) {
        delete asset;
    }
    for (Effect* effect : effects) {
        delete effect;
    }
}

void Track::addAsset(MediaAsset* asset) {
    assets.push_back(asset);
}

void Track::addEffect(Effect* effect) {
    effects.push_back(effect);
}

const std::vector<MediaAsset*>& Track::getAssets() const {
    return assets;
}

const std::vector<Effect*>& Track::getEffects() const {
    return effects;
}