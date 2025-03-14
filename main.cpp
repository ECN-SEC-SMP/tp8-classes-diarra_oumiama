#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

#include "animal.h"
#include "attaque.h"
#include "pierre.h"

int main(){

    srand(time(NULL)); //initialisation du temps pour les fonctions rand()
    animal plateau[10][10]; //plateau de jeu de taille 10x10 d-animaux
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            plateau[i][j]= ' '; //initialisation du plateau
            cout<< plateau[i][j]<<endl; //affichage du plateau
        }
    }
    //initialisation des animaux
    loup loup1(10,10); //cr
//test avec loup et pierre
//je dois disposer aleatoirement les 25 tokens sur le plateau
//de maniere egale

  /*   for (int i=0; i<14; i++){
       

        plateau[x][y]= 'L'; //le token est un loup
    }
    for (int i=0; i<13; i++){
        attaque();
        plateau[x][y]= 'P'; //le token est une pierre
    } */
}