#ifndef PROJECT_H
#define PROJECT_H

#include <string>
#include "Timeline.h"

class Project {
private:
    std::string name;
    Timeline* timeline;
    static int totalProjects;

public:
    Project(std::string name);
    ~Project();
        Timeline* getTimeline() const;

    void save(std::string filename) const;
    void load(std::string filename);

    static int getTotalProjects();
};

#endif
