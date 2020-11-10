#include "space2d.hpp"

Space2d::Space2d(double width, double height) {
    this->width = width;
    this->height = height;
}

void Space2d::turnOnGrid(double gridSize) {
    this->gridOn = true;
    this->gridSize = gridSize;
}

void Space2d::turnOffGrid() {
    this->gridOn = false;
}

void Space2d::movePivot(int x, int y) {
    this->pivotX += x;
    this->pivotY += y;
}