#include <iostream>
#include "vector_2d.hpp"

int main() {
    Vector2D a(2.0, 3.0);
    Vector2D b(5.0, 7.0);

    Vector2D c = a + b;
    Vector2D d = b - a;

    std::cout << "a+b = (" << c.getXPosition() << ", " << c.getYPosition() << ")\n";
    std::cout << "b-a = (" << d.getXPosition() << ", " << d.getYPosition() << ")\n";
    std::cout << "Distance entre a et b : " << a.distance(b) << "\n";

    return 0;
}