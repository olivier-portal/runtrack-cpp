#include <iostream>
#include <memory>
#include "pinguin_move.hpp"

int main() {
    auto p1 = std::make_shared<Pingouin>(2.8, 0.6, 4.2, "Roger");
    auto p2 = std::make_shared<Pingouin>(3.0, 0.8, 5.0, "Albert");

    // Ajout des pinguoins à la colonie
    Pingouin::colonie.push_back(p1);
    Pingouin::colonie.push_back(p2);

    Pingouin::afficherColonie();

    std::cout << "\nSuppression d’un pingouin...\n";
    p1.reset(); // Détruit p1

    Pingouin::afficherColonie();

    return 0;
}