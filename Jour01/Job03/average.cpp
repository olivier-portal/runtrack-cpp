#include <iostream>

int main() {
    int numbers[5];
    for (int i = 0; i < 5; ++i) {
        std::cout << "Entrez le nombre entier " << (i + 1) << "/5 : ";
        std::cin >> numbers[i];
        }
    float sum = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
    float average = sum / 5;
    std::cout << "La moyenne de " << numbers[0] << " + " << numbers[1] << " + " << numbers[2] << " + " << numbers[3] << " + " << numbers[4] << " est de : " << average << std::endl;
    return 0;
}