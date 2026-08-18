#ifndef IMAGE_ASSET_H
#define IMAGE_ASSET_H

#include "MediaAsset.h"

class ImageAsset : public MediaAsset {
public:
    ImageAsset(std::string title, double duration);
    double renderCost() const override;
};

#endif