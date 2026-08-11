#ifndef TEXT_OVERLAY_H
#define TEXT_OVERLAY_H

#include "Effect.h"

class TextOverlay : public Effect {
private:
    std::string text;

public:
    TextOverlay(std::string text);
    std::string apply() const override;
};

#endif