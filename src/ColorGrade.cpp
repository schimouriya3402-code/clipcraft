#include "../include/ColorGrade.h"

ColorGrade::ColorGrade(std::string lookName)
    : Effect("Color Grade"), lookName(lookName) {}

std::string ColorGrade::apply() const {
    return "Applied '" + lookName + "' color grade";
}

double ColorGrade::renderCostAdd() const {
    return 2.0;
}