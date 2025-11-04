#include <iostream>

int main () {
     int annee;
     std::cout << "Entrez une annee pour savoir si elle est bissextile : ";
     std::cin >> annee;

     if (annee % 4 == 0 && annee % 100 != 0 || annee % 400 == 0) {
        std::cout << "L'annee " << annee << " est bissexitle." << std::endl;
     }
     else {
        std::cout << "L'annee " << annee << " n'est pas bissexitle." << std::endl;
     }
}