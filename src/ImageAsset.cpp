#include "../include/ImageAsset.h"

ImageAsset::ImageAsset(std::string title, double duration)
    : MediaAsset(title, duration) {}

double ImageAsset::renderCost() const {
    return 1.0;
}