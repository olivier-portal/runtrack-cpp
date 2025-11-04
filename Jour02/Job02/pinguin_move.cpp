#include "pinguin_move.hpp"
#include <iostream>
#include <iomanip>
#include <stdexcept>

//======== Aquatique ==========
Aquatique::Aquatique(double vNage) {
    setVitesseNage(vNage);
}

double Aquatique::getVitesseNage() const {
    return vitesseNage_;
}

void Aquatique::setVitesseNage(double v) {
    if (v < 0.0) throw std::invalid_argument("vitesseNage doit être >= 0");
    vitesseNage_ = v;
}

void Aquatique::nage() const {
    std::cout << "Je nage a " << std::fixed << std::setprecision(2) << getVitesseNage() << "m/s.\n";
}

//======== Terrestre ==========
Terrestre::Terrestre(double vMarche) {
    setVitesseMarche(vMarche);
}

double Terrestre::getVitesseMarche() const {
    return vitesseMarche_;
}

void Terrestre::setVitesseMarche(double v) {
    if (v < 0.0) throw std::invalid_argument("vitesseNage doit etre >= 0");
    vitesseMarche_ = v;
}

void Terrestre::marche() const {
    std::cout << "Je marche a " << std::fixed << std::setprecision(2) << getVitesseMarche() << "m/s.\n";
}

//======== Pingouin ==========
Pingouin::Pingouin(double vNage, double vMarche) : Aquatique(vNage), Terrestre(vMarche) {}

void Pingouin::sePresenter() const {
    std::cout << "Bonjour, je suis un pingouin.\n";
    nage();
    marche();
}

void Pingouin::nage() const {
    Aquatique::nage();
}

void Pingouin::marche() const {
    Terrestre::marche();
}