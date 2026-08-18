# ClipCraft

A console-based C++ application that simulates the internal architecture behind non-linear video editing software, built for PROG 102 (Object-Oriented Programming in C++) at Westcliff University.

## What it does

ClipCraft models how video editing software like DaVinci Resolve organizes a project internally: media assets, effects, tracks, and timelines. It demonstrates inheritance, polymorphism, composition, aggregation, and static class members through a domain the author understands from hands-on video editing experience.

It also includes an original feature, the **Mood Engine**, which analyzes a media asset's render cost and duration to suggest a music genre or pacing style.

## Class structure

- `MediaAsset` (abstract) → `VideoClip`, `AudioClip`, `ImageAsset`
- `Effect` (abstract) → `ColorGrade`, `Transition`, `TextOverlay`
- `Track` — owns a collection of assets and effects (composition)
- `Timeline` — aggregates multiple tracks, computes total duration and render cost
- `Project` — top-level container, tracks total projects created via a static counter, handles save/load
- `MoodEngine` — analyzes a `MediaAsset` and suggests a mood/pacing style (dependency, not ownership)

## How to build and run

\```
cd src
g++ -std=c++17 -Wall main.cpp Project.cpp Timeline.cpp Track.cpp MediaAsset.cpp VideoClip.cpp AudioClip.cpp ImageAsset.cpp Effect.cpp ColorGrade.cpp Transition.cpp TextOverlay.cpp MoodEngine.cpp -o clipcraft
./clipcraft
\```

## Project structure

\```
clipcraft/
├── include/    # header files (.h)
├── src/        # implementation files (.cpp)
└── data/       # saved project files
\```