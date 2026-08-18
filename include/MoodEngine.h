#ifndef MOOD_ENGINE_H
#define MOOD_ENGINE_H

#include <string>
#include "MediaAsset.h"

class MoodEngine {
public:
    std::string suggestMood(const MediaAsset* asset) const;
};

#endif