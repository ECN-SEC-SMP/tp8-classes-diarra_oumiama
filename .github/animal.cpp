#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include attaque.h;
#include animal.h;

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
//revoie le nom de l'animal
animal::getNom() const
{
    return nom;
}
//renvoie l'abscisse de la cellule occupee par l'animal
animal::getX() const
{
    return X;
}
//renvoie l'ordonnée de la cellule occupee par l'animal
animal::getY() const
{
    return Y;
}
//renvoie vrai si l'animal est vivant
animal::getVivant() const
{
    return vivant;
}

//renvoie le type d'attaque de l'animal
animal::getAttaque() const
{
    return typeAttaque;
}
//renvoie le type d'attaque de l'animal
animal::setVivant(bool v)
{
    vivant = v;
}

//l'animal attaque l'animal passé en parametre ie a
animal::attaque(animal &a){
    

}
