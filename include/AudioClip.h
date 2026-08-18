#ifndef AUDIO_CLIP_H
#define AUDIO_CLIP_H

#include "MediaAsset.h"

class AudioClip : public MediaAsset {
public:
    AudioClip(std::string title, double duration);
    double renderCost() const override;
};

#endif