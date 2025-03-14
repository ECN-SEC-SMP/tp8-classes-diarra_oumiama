#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include "pierre.h"
#include "attaque.h"


pierre::pierre(int maxX, int maxY):animal(maxX, maxY)
{   
    setNom("P");

};
//elle attaque avec une pierre
pierre::setAttaque(){
    attaque( 0)
}
pierre::deplace(int maxX, maxY){
    cout<<'ne bouge pas'<<endl;
}