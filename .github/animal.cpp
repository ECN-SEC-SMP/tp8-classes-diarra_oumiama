#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include attaque.h;

//loup et pierre

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
    void setAttaque();                //virtuelle pure
    void deplace(int maxX, int maxY); //virtuelle pure

};  

animal::animal(int maxX, int maxY)
{   nom= "animal";
    X = rand() % maxX; //abscisse aleatoire inferieur a maxX
    Y= rand() % maxY;   //ordonnée aleatoire inferieur a maxY
    vivant = true;      //l'animal est vivant
    typeAttaque = attaque(); //l'animal a une attaque aleatoire
}

animal::animal(int maxX, int maxY, int a, int b)
{   nom= "animal";
    X = a; //abscisse aleatoire inferieur a maxX
    Y= b;   //ordonnée aleatoire inferieur a maxY
    vivant = true;      //l'animal est vivant
    typeAttaque = attaque(); //l'animal a une attaque aleatoire
}

animal::getNom() const
{
    return nom;
}

animal::getX() const
{
    return X;
}

animal::getY() const
{
    return Y;
}

animal::getVivant() const
{
    return vivant;
}

animal::setVivant(bool v)
{
    vivant = v;
}

animal attaque(animal &a)

