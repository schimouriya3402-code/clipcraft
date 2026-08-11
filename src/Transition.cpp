#include "../include/Transition.h"

Transition::Transition(std::string style)
    : Effect("Transition"), style(style) {}

std::string Transition::apply() const {
    return "Applied '" + style + "' transition";
}

double Transition::renderCostAdd() const {
    return 1.0;
}
