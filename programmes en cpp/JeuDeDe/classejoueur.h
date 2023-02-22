/*
Program by : Thomas Paillard
Jeu de de
.h file
*/
#include <string>
using namespace std;

#ifndef JOUEUR_H
#define JOUEUR_H

class De;

class Joueur
{
  private:
  
	De* de1;
	De* de2;
  
	string pseudo;
    int point;    

  public:
  
	Joueur();
	
	string get_pseudo();
	
	int get_point();
	void jouer();
	
	Joueur(string pse, De* de_1, De* de_2);
    ~Joueur();
};
#endif
