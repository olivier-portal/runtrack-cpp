#include <iostream>
#include "pinguin_move.hpp"

int main() {
    Pingouin p1(2.8, 0.6, 4.2);
    p1.sePresenter("Roger");
    std::cout << "\n";
    Pingouin p2 = p1;
    p2.setVitesseGlisse(5.0);
    p2.sePresenter("Albert");

    return 0;
}