#pragma once

#include <vector>

#include "../utils/vector2d.hpp"
#include "object2d.hpp"

class Space2d {
    public:
        Vector2d dimensions_;
        std::vector<Object2d*> objects_;
        double tickRateMs_;

        Space2d(Vector2d dimensions, double tickRateMs);
        void addObject2d(Object2d* newObject2d);
        void update();
};