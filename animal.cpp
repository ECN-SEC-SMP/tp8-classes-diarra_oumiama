#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include "animal.h"
#include "attaque.h"

animal::animal(int maxX, int maxY)
{   nom= "";
    X = srand() % maxX; //abscisse aleatoire inferieur a maxX
    Y= srand() % maxY;   //ordonnée aleatoire inferieur a maxY
    vivant = true;      //l'animal est vivant
    typeAttaque = attaque(); //l'animal a une attaque aleatoire
};

animal::setNom(string nom){
    
   this->nom = nom;
}

animal::animal(int maxX, int maxY, int a, int b)
{   nom= "";
    X = a; //abscisse aleatoire inferieur a maxX
    Y= b;   //ordonnée aleatoire inferieur a maxY
    vivant = true;      //l'animal est vivant
    typeAttaque = attaque(); //l'animal a une attaque aleatoire
}
//revoie le nom de l'animal
string animal::getNom() const
{
    this->nom= nom;
    return nom;
}
//renvoie l'abscisse de la cellule occupee par l'animal
int animal::getX() const
{
    this->X= X;
    return X;
}
//renvoie l'ordonnée de la cellule occupee par l'animal
int animal::getY() const
{
    this->Y= Y;
    return Y;
}
//renvoie vrai si l'animal est vivant
bool animal::getVivant() const
{
   this->vivant= vivant;
   return vivant;
}

//renvoie le type d'attaque de l'animal
attaque animal::getAttaque() const
{
   this->typeAttaque= typeAttaque;
   return typeAttaque;
}
//renvoie le type d'attaque de l'animal
void animal::setVivant(bool v)
{
    vivant = v;
}

//l'animal attaque l'animal passé en parametre ie a
//compare l'attaque courante avec l'attaque de l'animal passe en parametre

//on utilise la foncion resousreattaque de a
void animal::Attaque(animal &a){
    

}
string animal::setNom(string nom){
    
   this->nom = nom;
}