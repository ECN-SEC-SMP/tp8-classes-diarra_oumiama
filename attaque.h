#ifndef attaque_h
#define attaque_h

#include <string>

class attaque{
    private:
    int type; //0:pierre, 1:feuille, 2:ciseaux
    public:
    attaque();// creer une attaque aleatoire
    attaque(int t); //creer une attaque specifique
    int getTypeAttaque() const;
    string getNomAttaque() const;
    bool resoudreAttaque(const attaque &a) const;
};
#endif
