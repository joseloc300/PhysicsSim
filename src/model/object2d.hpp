#pragma once

#include "../utils/vector2d.hpp"

class Object2d {
    private:
        inline static int staticId_ = 0;
        int id_;

    public:      
        Vector2d position_;
        Vector2d velocity_;
        Vector2d acceleration_;
        Vector2d forceAcum_;

        Object2d(Vector2d position);
        void move(Vector2d moveVector);
        int getId();

};