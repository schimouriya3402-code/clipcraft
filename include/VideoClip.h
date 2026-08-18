#ifndef VIDEO_CLIP_H
#define VIDEO_CLIP_H

#include "MediaAsset.h"

class VideoClip : public MediaAsset {
private:
    int resolutionHeight;

public:
    VideoClip(std::string title, double duration, int resolutionHeight);
    double renderCost() const override;
};

#endif
