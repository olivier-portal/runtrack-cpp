#include <iostream>
#include "vector_2d.hpp"
#include <cmath>


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

//=========== Opérateurs ===============

Vector2D Vector2D::operator+(const Vector2D& other) const {
    return Vector2D(xPosition + other.xPosition, yPosition + other.yPosition);
}

Vector2D Vector2D::operator-(const Vector2D& other) const {
    return Vector2D(xPosition - other.xPosition, yPosition - other.yPosition);
}

//=========== Distance euclidéenne ===============

double Vector2D::distance(const Vector2D& other) const {
    double dx = xPosition - other.xPosition;
    double dy = yPosition - other.yPosition;

    return std::sqrt(pow(dx, 2) + pow(dy, 2));
}