#include "../include/TextOverlay.h"

TextOverlay::TextOverlay(std::string text)
    : Effect("Text Overlay"), text(text) {}

std::string TextOverlay::apply() const {
    return "Applied text overlay: \"" + text + "\"";
}