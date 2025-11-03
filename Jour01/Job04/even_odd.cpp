#include <iostream>

int main() {
    int num;
    std::cout << "Entrez un nombre entier: ";
    std::cin >> num;
    int isEven;
    if (num % 2 == 0) {
        isEven = 1;
    } else {
        isEven = 0;
    }
    std::cout << "Le nombre " << num << " est " << (isEven ? "pair" : "impair") << std::endl;
    return 0;
}