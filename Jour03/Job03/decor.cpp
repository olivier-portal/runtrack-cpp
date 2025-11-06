#include "decor.hpp"

void Decor::draw() const {
    std::cout << "Decor affiche a (" << getXPosition() << ", " << getYPosition() << ").\n";
}

void Decor::update(double delataTime) {
    (void)delataTime;
    std::cout << "Le decor ne bouge pas.\n";
}
