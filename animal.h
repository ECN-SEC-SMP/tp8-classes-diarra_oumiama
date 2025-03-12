#include<string>
#include "attaque.h"
using namespace std;

#ifndef animal_h
#define animal_h


class animal {
    string nom;
    int X; //abscisse de ll'animal
    int Y;  //ordonnée de l'animal
    bool vivant;
    attaque typeAttaque;

public:
    animal(int maxX, int maxY) ;
    animal(int maxX, int maxY, int a, int b);
    string getNom() const;
    int getX() const;
    int getY() const;
    bool getVivant() const;
    attaque getAttaque() const;
    void setVivant(bool v);
    void Attaque(animal& a);
    virtual void setAttaque()=0;                //virtuelle pure
    virtual void deplace(int maxX, int maxY)=0; //virtuelle pure

};  
#endif