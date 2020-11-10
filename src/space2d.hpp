#pragma once

class Space2d {
    public:
        double width;
        double height;
        bool gridOn;
        double gridSize;

        int pivotX = 0;
        int pivotY = 0;

        Space2d(double width, double height);
        void turnOnGrid(double gridSize);
        void turnOffGrid();
        void movePivot(int x, int y);

};