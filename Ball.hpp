#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {
public:
    Ball(double x, double y, double vx, double vy, double radius, double red,
       double green, double blue)      
      : point(x, y), vec(vx, vy), radius_{radius},
        color(red, green, blue), vel(vec){};    
    
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;

private:
    Color color;
    Point point;
    Point vec;
    Velocity vel;
    double radius_;
};
