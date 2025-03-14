#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include "loup.h"

loup::loup(int maxX, int maxY):animal(maxX, maxY)
{   
    setNom("L");

};

loup::loup(int maxX, int maxY, int a, int b):animal(maxX, maxY,a,b)
{   
    setNom("L");

};

//le loup peut attaquer aleatoirement avec une pierre, une feuille ou des ciseaux
loup::setAttaque(){
    attaque();
}

//les loups se deplacent aleatoirement sur le plateau
loup::deplace(int maxX, maxY){
    X= rand() % maxX; //abscisse aleatoire inferieur a maxX
    Y= rand() % maxY;   //abscisse aleatoire inferieur a maxY
    cout<<'se deplace en ('<<X<<','<<Y<<')'<<endl;
}































