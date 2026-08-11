#ifndef MEDIA_ASSET_H
#define MEDIA_ASSET_H

#include <string>

class MediaAsset {
protected:
    std::string title;
    double duration;

public:
    MediaAsset(std::string title, double duration);
    virtual ~MediaAsset();

    virtual double renderCost() const = 0;

    std::string getTitle() const;
    double getDuration() const;
};

#endif