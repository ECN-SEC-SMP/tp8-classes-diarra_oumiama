#ifndef loup_h
#define loup_h

class loup: public animal //herite des methodes publiques de la classe animal
//la classe loup a en plus les deux fonctions virtuelles de la classe animal
{ Public:
  //constructeur
  loup(int maxX, int maxY);
  loup(int maxX, int maxY, int a, int b);
  //methode
  void setAttaque(Attaque& a);            
  void deplace(int maxX, int maxY);
};
#endif