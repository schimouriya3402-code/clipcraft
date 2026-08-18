#include "../include/MoodEngine.h"

std::string MoodEngine::suggestMood(const MediaAsset* asset) const {
    double duration = asset->getDuration();
    double cost = asset->renderCost();

    if (cost > 15.0) {
        return "High-energy, upbeat track -- fast cuts detected";
    } else if (duration > 20.0) {
        return "Ambient, mellow background music -- longer duration suggests a calm scene";
    } else {
        return "Neutral, versatile background track";
    }
}