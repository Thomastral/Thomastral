/*
Program by : Thomas Paillard
Jeu de de
.h file
*/
#include <string>
using namespace std;

#ifndef DE_H
#define DE_H

class De
{
  private:
  
    int valeur;
    int nbFace;

  public:
  
	De();
	De(int NombreDeFace);
	
	int lancer();
	int get_valeur();
	
    ~De();
};
#endif
