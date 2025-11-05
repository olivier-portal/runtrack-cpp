#pragma once
#include <string>

class Aquatique {
    private:
    double vitesseNage_{0.0}; //Déclaration vitesse en ms

    protected:
    double getVitesseNage() const;
    void setVitesseNage(double v);

    virtual void nage() const;

    public:
    Aquatique() = default;
    explicit Aquatique(double vNage);
    virtual ~Aquatique() = default;
};

class Terrestre {
    private:
    double vitesseMarche_{0.0};

    protected:
    double getVitesseMarche() const;
    void setVitesseMarche(double v);

    virtual void marche() const;

    public:
    Terrestre() = default;
    explicit Terrestre(double vMarche);
    virtual ~Terrestre() = default;
};

class Pingouin : public Aquatique, public Terrestre {
    public:
    Pingouin(double vNage, double vMarche, double vGlisse = 0.0);
    Pingouin(const Pingouin& copieP);

    void sePresenter(std::string name) const;

    double getVitesseGlisse() const;
    void setVitesseGlisse(double v);

    private:
    double vitesseGlisse_{0.0};
    void nage() const override;
    void marche() const override;
};