#ifndef EFFECT_H
#define EFFECT_H

#include <string>

class Effect {
protected:
    std::string name;

public:
    Effect(std::string name);
    virtual ~Effect();

    virtual std::string apply() const = 0;

    virtual double renderCostAdd() const;

    std::string getName() const;
};

#endif