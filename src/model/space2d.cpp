#include "space2d.hpp"

Space2d::Space2d(Vector2d dimensions, double tickRateMs) {
    dimensions_ = dimensions;
    tickRateMs_ = tickRateMs;
    objects_ = std::vector<Object2d*>();
}

void Space2d::addObject2d(Object2d* newObject2d) {
    objects_.push_back(newObject2d);
}

void Space2d::update() {
    
}
