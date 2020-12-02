#pragma once

/*
Class representing a vector with 2 doubles
*/
class Vector2d {
    private:
        double x_;
        double y_;

    public:
        Vector2d() {
            x_ = 0;
            y_ = 0;
        }
        Vector2d(double x, double y) {
            x_ = x;
            y_ = y;
        }
        Vector2d(const Vector2d& vOld) {
            x_ = vOld.x_;
            y_ = vOld.y_;
        }
        const double getX() { return x_; }
        const double getY() { return y_; }
        double setX(double x) { x_ = x; }
        double setY(double y) { y_ = y; }
        double &operator[](int i) {
            switch(i) {
                case 0:
                    return x_;
                    break;
                case 1:
                    return y_;
                    break;
            }
        }
        Vector2d& operator+=(const Vector2d& rhs)
        {
            x_ += rhs.x_;
            y_ += rhs.y_;
            return *this;
        }
        friend Vector2d operator+(Vector2d lhs, const Vector2d rhs) {
            lhs += rhs;
            return lhs;
        }
        Vector2d& operator-=(const Vector2d& rhs)
        {
            x_ -= rhs.x_;
            y_ -= rhs.y_;
            return *this;
        }
        friend Vector2d operator-(Vector2d lhs, const Vector2d rhs) {
            lhs -= rhs;
            return lhs;
        }
        Vector2d& operator*=(const double& rhs)
        {
            x_ *= rhs;
            y_ -= rhs;
            return *this;
        }
        friend Vector2d operator*(Vector2d lhs, const double rhs) {
            lhs *= rhs;
            return lhs;
        }
        friend Vector2d operator*(double lhs, const Vector2d rhs) {
            Vector2d res(rhs);
            res *= lhs;
            return res;
        }
};