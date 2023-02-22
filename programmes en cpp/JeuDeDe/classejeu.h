/*
Program by : Thomas Paillard
Jeu de de
.h file
*/
#include <string>
#include <list>
using namespace std;

#ifndef JEU_H
#define JEU_H

class Joueur;
class Jeu
{
  private:
  
    bool inscription;
    int tourActuel;
    bool enCours;

  public:
  
	Jeu();
	
	string afficherListeJoueur();
	string afficherListeJoueurPoint;
	
	void inscrire(string pse);
	void cloreInscription();
	bool inscriptionOuverte();
	
	Joueur * getSuivant();
	
	bool jeuEnCours();
	int getValDe1();
	int getValDe2();
	int get_tourActuel();
	
    ~Jeu();
};
#endif


