#include <iostream>
#include "vector_2d.hpp"


//=========== Constructors & Getters / Setters ===============
Vector2D::Vector2D(double x, double y) {
   xPosition = x;
   yPosition = y;
}

double Vector2D::getXPosition() const{
    return xPosition;
}

void Vector2D::setXPosition(double x) {
    xPosition = x;
}

double Vector2D::getYPosition() const{
    return yPosition;
}

void Vector2D::setYPosition(double y) {
    yPosition = y;
}