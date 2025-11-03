#include <iostream>

int main() {
    float prix_ht, poid, taux_tva, prix_ttc;
    std::cout << "Entrez le prix hors taxe d'un kilo de carotte : ";
    std::cin >> prix_ht;
    std::cout << "Entrez le poids en kilogramme de carotte : ";
    std::cin >> poid;
    std::cout << "Entrez le taux de TVA (en pourcentage) : ";
    std::cin >> taux_tva;
    prix_ttc = prix_ht * poid + (prix_ht * poid * taux_tva / 100);
    std::cout << "Le prix TTC pour " << poid << " kg de carotte est de : " << prix_ttc << " euros." << std::endl;
    return 0;
}