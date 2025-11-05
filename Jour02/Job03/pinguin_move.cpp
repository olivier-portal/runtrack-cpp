#include "pinguin_move.hpp"
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <algorithm>

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
    std::cout << "Je nage a " << std::fixed << std::setprecision(1) << getVitesseNage() << " m/s.\n";
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
    std::cout << "Je marche a " << std::fixed << std::setprecision(1) << getVitesseMarche() << " m/s.\n";
}

//======== Pingouin ==========
Pingouin::Pingouin(double vNage, double vMarche, double vGlisse, std::string nom) : Aquatique(vNage), Terrestre(vMarche), vitesseGlisse_(vGlisse), nom_(std::move(nom)) {
    std::cout << "Un nouveau pinguoin a ete ajoute a la colonie.\n";
}

std::vector<std::weak_ptr<Pingouin>> Pingouin::colonie;

void Pingouin::compacterColonie() {
    colonie.erase(std::remove_if(colonie.begin(), colonie.end(),
        [](const std::weak_ptr<Pingouin>& w){ return w.expired(); }),
        colonie.end());
}

void Pingouin::sePresenter() const {
    std::cout << "Bonjour, je suis " << nom_ << " .\n";
    nage();
    marche();
    std::cout << "Et je glisse a " << std::fixed << std::setprecision(1)
              << vitesseGlisse_ << " m/s.\n";
}

void Pingouin::nage() const {
    Aquatique::nage();
}

void Pingouin::marche() const {
    Terrestre::marche();
}

//======== Copie de pingouin ==========

Pingouin::~Pingouin() {
    std::cout << "Un pinguoin s'est fait mange, RIP !!!!\n";

    colonie.erase(
        std::remove_if(
            colonie.begin(),
            colonie.end(),
            [this](const std::weak_ptr<Pingouin>& w) {
                if (auto p = w.lock()) {
                    return p.get() == this;
                }
                return false;
            }),
        colonie.end()
    );
}

//======== Affichage de la colonie ==========

void Pingouin::afficherColonie() {
    compacterColonie();
    std::cout << "La colonie actuelle:\n";
    for (auto& w : colonie) {
        if (auto p = w.lock()) {
            p->sePresenter();
        }
    }
    std::cout << "\n";
}



//======== Copie de pingouin ==========

Pingouin::Pingouin(const Pingouin& copieP) : Aquatique(copieP.getVitesseNage()), Terrestre(copieP.getVitesseMarche()), vitesseGlisse_(copieP.getVitesseGlisse()) {
    std::cout << "Un nouveau copain du pinguoin a ete ajoute a la colonie.\n";
}

//======== getter & setter ==========
double Pingouin::getVitesseGlisse() const {
    return vitesseGlisse_;
}

void Pingouin::setVitesseGlisse(double v) {
    if (v < 0.0) throw std::invalid_argument("La vitesse doit etre >= 0");
    vitesseGlisse_ = v;
}
