#include <iostream>

int trouverPlusPetit(int* tableau, int taille) {
    int* min = tableau;

    for (int* ptr = tableau + 1; ptr < tableau + taille; ++ptr) {
        if (*ptr < *min) {
            min = ptr;
        }
    }

    return *min;
}

int main() {
    int nombres[] = {42, 17, 56, 3, 99, 8};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    int plusPetit = trouverPlusPetit(nombres, taille);

    std::cout << "Le nombre le plus petit est " << plusPetit << std::endl;

    return 0;
}