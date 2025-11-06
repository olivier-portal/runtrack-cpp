#include "character.hpp"

Character::Character(std::string name, double x, double y, int health) : GameObject(x, y), name_(std::move(name)), health_(health) {}

void Character::draw() const {
    std::cout << "Le personnage " << name_ << " est a la position : " << getXPosition() << ", " << getYPosition() << " et à une santé de : " << health_ << " PV.\n";
}

void Character::update(double deltaTime) {
    std::cout << name_ << " se met à jour... (deltaTime = " << deltaTime << ")\n";
 
    if (health_ < 100) health_ += 1;
}

bool Character::isAlive() const {
    return health_ > 0;
}

void Character::takeDamage(int damage) {
    health_ -= damage;
    if (health_ < 0) health_ = 0;
}