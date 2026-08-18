#include "../include/AudioClip.h"

AudioClip::AudioClip(std::string title, double duration)
    : MediaAsset(title, duration) {}

double AudioClip::renderCost() const {
    return duration * 0.5;
}