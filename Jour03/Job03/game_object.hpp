#pragma once
#include <iostream>
#include "vector_2d.hpp"

class GameObject : public Vector2D {
    public:
        
        GameObject() = default;
        GameObject(double x, double y) : Vector2D(x, y) {}
        virtual ~GameObject() = default;


        virtual void draw() const = 0;
        virtual void update(double deltaTime) = 0;
};