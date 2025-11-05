#pragma once
#include <string>
#include <memory>
#include <vector>

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
    Pingouin(double vNage, double vMarche, double vGlisse = 0.0, std::string nom = "nom");
    Pingouin(const Pingouin& copieP);
    ~Pingouin();

    static std::vector<std::weak_ptr<Pingouin>> colonie;

    static void afficherColonie();
    static void compacterColonie();

    const std::string& getNom() const { return nom_; }
    void setNom(const std::string& n) { nom_ = n; }

    void sePresenter() const;

    double getVitesseGlisse() const;
    void setVitesseGlisse(double v);

    private:
    double vitesseGlisse_{0.0};
    std::string nom_;
    void nage() const override;
    void marche() const override;
};