#pragma once
#include "game_object.hpp"
#include <iostream>

class Decor : public GameObject {
    public:
        Decor(double x, double y) : GameObject(x, y) {}

        void draw() const override;
        void update(double deltaTime) override;
};