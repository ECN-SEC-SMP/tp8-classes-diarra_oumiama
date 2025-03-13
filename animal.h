#include<string>;
##include<attaque.h>;
#ifndef animal.h
#define animal.h


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
    attaque getTypeAttaque() const;
    void setVivant(bool v);
    void attaque(animal &a);
    void setAttaque()=0;                //virtuelle pure
    void deplace(int maxX, int maxY)=0; //virtuelle pure

};  
#endif