#include <iostream>
#include <vector>
#include "decor.hpp"
#include "character.hpp"
#include "weapon.hpp"

int main() {

    // Création d'objets du jeu
    Decor arbre(5.0, 10.0);
    Decor rocher(2.0, 8.0);
    Character hero("Jinx", 0.0, 0.0, 10);
    Character ennemi("Raccoon", 2.0, 3.0, 8);

    // On les stocke tous dans un même vecteur
    std::vector<GameObject*> scene;
    scene.push_back(&arbre);
    scene.push_back(&rocher);
    scene.push_back(&hero);
    scene.push_back(&ennemi);

    std::cout << "Dessin de la scene:\n";
    for (const auto& obj : scene) {
        obj->draw();
    }

    std::cout << "Mise à jour de la scene :\n";
    for (auto& obj : scene) {
        obj->update(0.016); //équivalent à 60FPS
    }

    Bow bow;
    Sword sword;
    Spear spear;

    bow.attack(ennemi);
    sword.attack(ennemi);
    spear.attack(ennemi);
    bow.attack(ennemi);
    sword.attack(ennemi);

    std::cout << "PV ennemi: " << ennemi.getHealth() << "\n";

    std::cout << "Le personnage est il encore en vie ?\n";
    for (auto& obj : scene) {
        // Test dynamique : on vérifie si c’est un Character
        Character* perso = dynamic_cast<Character*>(obj);
        if (perso) {
            std::cout << perso->getName() << (perso->isAlive() ? " est vivant.\n" : " est mort.\n");
        }
    }

    return 0;
}