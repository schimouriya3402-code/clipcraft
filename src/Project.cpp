#include "../include/Project.h"
#include <fstream>
#include <iostream>

int Project::totalProjects = 0;

Project::Project(std::string name) : name(name) {
    timeline = new Timeline();
    totalProjects++;
}

Project::~Project() {
    delete timeline;
}

void Project::save(std::string filename) const {
    std::ofstream file(filename);
    file << "Project: " << name << std::endl;
    file << "Total Duration: " << timeline->totalDuration() << std::endl;
    file << "Total Render Cost: " << timeline->totalRenderCost() << std::endl;
    file.close();
}

void Project::load(std::string filename) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
    file.close();
}

int Project::getTotalProjects() {
    return totalProjects;
}