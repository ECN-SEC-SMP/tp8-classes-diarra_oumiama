#ifndef pierre.h
#define pierre.h

class loup: public animal //herite des methodes publiques de la classe animal
//la classe loup a en plus les deux fonctions virtuelles de la classe animal
{ void setAttaque();            
  void deplace(int maxX, int maxY);
};
#endif