#include <iostream>

int main() {
    int a, b;
    std::cout << "Entrez deux nombres entiers: ";
    std::cin >> a >> b;
    std::cout << "Avant echange, le premier nombre est " << a << " et le deuxieme nombre est " << b << std::endl;
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Apres echange, le premier nombre est " << a << " et le deuxieme nombre est " << b << std::endl;

    return 0;
}