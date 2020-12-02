#include "object2d.hpp"

Object2d::Object2d(Vector2d position) {
    id_ = staticId_;
    staticId_++;
    position_ = position;
}

void Object2d::move(Vector2d moveVector) {
    position_ += moveVector;
}

int Object2d::getId() {
    return id_;
}