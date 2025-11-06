#pragma once
#include <iostream>
#include "character.hpp"

class Weapon
{
public:
    virtual void attack(Character& target) = 0;
    virtual ~Weapon() = default;
};

class Bow : public Weapon {
    public:
        Bow() : range_(4), power_(1) {}
        void attack(Character& target) override;

    private:
        int range_;
        int power_;
};

class Spear : public Weapon {
    public:
        Spear() : range_(2), power_(2) {}
        void attack(Character& target) override;

    private:
        int range_;
        int power_;
};

class Sword : public Weapon {
public:
    Sword() : range_(1), power_(4) {}
    void attack(Character& target) override;

private:
    int range_;
    int power_;
};