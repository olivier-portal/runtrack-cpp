#pragma once
#include "game_object.hpp"
#include <iostream>
#include <string>

class Character : public GameObject {
    private:
        std::string name_;
        int health_;

    public:
        Character(std::string name, double x, double y, int health);

        void draw() const override;
        void update(double deltaTime) override;
        bool isAlive() const;
        void takeDamage(int damage);

        const std::string& getName() const {
            return name_;
        }
        int getHealth() const {
            return health_;
        }
        void setHealth(int h) {
            health_ = h;
        }
};