#include <iostream>
using namespace std;
#include "attaque.h"

//creation d'une attaque aleatoire entre pierre, feuille et ciseaux
attaque::attaque(){
    type = rand() % 3;
}

//creation d'une attaque specifique de type t
attaque::attaque(int t){
    type = t;
}

//connaitre le type de l'att
int attaque::getTypeAttaque() const{
    return type;
}

//connaitre le nom de l'attaque
string attaque::getNomAttaque() const{
    if(type == 0){
        return "pierre";
    }
    else if(type == 1){
        return "feuille";
    }
    else{
        return "ciseaux";
    }
}

//renvoie vrai si l'att sur laquelle est applique la fonction est plus forte
// que l'attaque passee en parametre(c'est a dire a)
bool attaque::resoudreAttaque(const attaque &a) const{
    if(a.getTypeAttaque==0){// 
        if(type==1){       //pierre contre feuille
        return true;
    } 
        else if (type==2){ //pierre contre ciseaux
        return false;
    }
}
    else if (a.getTypeAttaque==1){
        if(type==2){            //feuille contre ciseaux
            return true;
        }
        else if (type==0){      //feuille contre pierre
            return false;
        }
    }
    else if (a.getTypeAttaque==2){      
        if(type==0){            //ciseaux contre pierre
            return true;
        }
        else if (type==1){      //ciseaux contre feuille
            return false;
        }
    }
}
