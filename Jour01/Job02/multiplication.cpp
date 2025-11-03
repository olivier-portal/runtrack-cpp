#include <iostream>

int main() {
    int a, b;
    std::cout << "Entrez deux nombres entiers: ";
    std::cin >> a >> b;
    int produit = a * b;
    std::cout << "Le produit de " << a << " et " << b << " est " << produit << std::endl;
    return 0;
}