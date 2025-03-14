#ifndef pierre_h
#define pierre_h

class pierre: public animal //herite des methodes publiques de la classe animal
//la classe pierre a en plus les deux fonctions virtuelles de la classe animal

{ Public:
  //constructeurs
  pierre(int maxX, int maxY);
  pierre(int maxX, int maxY, int a, int b);
  //methode
  void setAttaque(Attaque& a);            
  void deplace(int maxX, int maxY);
};
#endif