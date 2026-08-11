#include "../include/MediaAsset.h"

MediaAsset::MediaAsset(std::string title, double duration)
    : title(title), duration(duration) {}

MediaAsset::~MediaAsset() {}

std::string MediaAsset::getTitle() const {
    return title;
}

double MediaAsset::getDuration() const {
    return duration;
}