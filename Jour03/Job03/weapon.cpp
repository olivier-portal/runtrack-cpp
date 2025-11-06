#include "weapon.hpp"
#include "character.hpp"

void Bow::attack(Character& target) {
    std::cout << "Tir de flèche ! Portée : " << range_ << ", puissance : " << power_ << "\n";
    target.takeDamage(power_);
}

void Spear::attack(Character& target) {
    std::cout << "Coup de lance ! Portée : " << range_
              << ", puissance : " << power_ << "\n";
    target.takeDamage(power_);
}

void Sword::attack(Character& target) {
    std::cout << "Coup d’épée ! Portée : " << range_
              << ", puissance : " << power_ << "\n";
    target.takeDamage(power_);
}