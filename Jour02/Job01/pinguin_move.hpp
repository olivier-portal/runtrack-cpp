class Aquatique {
    private:
    double vitesseNage;

    protected:
    double getVitesseNage();
    double setVitesseNage();
};

class Terrestre {
    private:
    double vitesseMarche;

    protected:
    double getVitesseMarche();
    double setVitesseMarche();
};

class Pingouin : public Aquatique, public Terrestre {
    private:
    void parler();
};