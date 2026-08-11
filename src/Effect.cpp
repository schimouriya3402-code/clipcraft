#include "../include/Effect.h"

Effect::Effect(std::string name) : name(name) {}

Effect::~Effect() {}

double Effect::renderCostAdd() const {
    return 0.5;
}

std::string Effect::getName() const {
    return name;
}