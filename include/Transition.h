#ifndef TRANSITION_H
#define TRANSITION_H

#include "Effect.h"

class Transition : public Effect {
private:
    std::string style;

public:
    Transition(std::string style);
    std::string apply() const override;
    double renderCostAdd() const override;
};

#endif