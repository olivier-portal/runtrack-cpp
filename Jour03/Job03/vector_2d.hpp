#include <iostream>

class Vector2D {
    private:
        double xPosition{0.0};
        double yPosition{0.0};

    public:
        //===== Constructeurs ========
        Vector2D() = default;
        Vector2D(double x, double y);


        //===== Getters & setters ========
        double getXPosition() const;
        double getYPosition() const;
        void setXPosition(double x);
        void setYPosition(double y);


        //===== Opérateurs ========
        Vector2D operator+(const Vector2D& other) const;
        Vector2D operator-(const Vector2D& other) const;

        //===== Méthode distance ========
        double distance(const Vector2D& other) const;
};