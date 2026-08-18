#include <iostream>
#include <vector>
#include "../include/Project.h"
#include "../include/Track.h"
#include "../include/VideoClip.h"
#include "../include/AudioClip.h"
#include "../include/ImageAsset.h"
#include "../include/ColorGrade.h"
#include "../include/Transition.h"
#include "../include/TextOverlay.h"
#include "../include/MoodEngine.h"

int main() {
    std::cout << "=== ClipCraft ===" << std::endl;
    std::cout << "Total projects created so far: " << Project::getTotalProjects() << std::endl;

    Project project("My First Project");

    Track* track1 = new Track();
    track1->addAsset(new VideoClip("Intro Shot", 10.0, 1080));
    track1->addAsset(new AudioClip("Background Music", 30.0));
    track1->addAsset(new ImageAsset("Logo Card", 3.0));
    track1->addEffect(new ColorGrade("Cinematic"));
    track1->addEffect(new Transition("Fade"));
    track1->addEffect(new TextOverlay("Subscribe now!"));

    project.getTimeline()->addTrack(track1);

    std::cout << "\nTotal duration: " << project.getTimeline()->totalDuration() << "s" << std::endl;
    std::cout << "Total render cost: " << project.getTimeline()->totalRenderCost() << std::endl;

    MoodEngine mood;
    for (MediaAsset* asset : track1->getAssets()) {
        std::cout << "\n" << asset->getTitle() << " -> " << mood.suggestMood(asset) << std::endl;
    }

    project.save("../data/project1.txt");
    std::cout << "\nProject saved to data/project1.txt" << std::endl;

    std::cout << "\nTotal projects created so far: " << Project::getTotalProjects() << std::endl;

    return 0;
}