#include "../include/VideoClip.h"

VideoClip::VideoClip(std::string title, double duration, int resolutionHeight)
    : MediaAsset(title, duration), resolutionHeight(resolutionHeight) {}

double VideoClip::renderCost() const {
    double resolutionFactor = resolutionHeight / 1080.0;
    return duration * 2.5 * resolutionFactor;
}