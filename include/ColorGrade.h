#ifndef COLOR_GRADE_H
#define COLOR_GRADE_H

#include "Effect.h"

class ColorGrade : public Effect {
private:
    std::string lookName;

public:
    ColorGrade(std::string lookName);
    std::string apply() const override;
    double renderCostAdd() const override;
};

#endif