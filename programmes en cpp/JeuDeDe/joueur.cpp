/*
Program by : Thomas Paillard
Jeu de de
fonctions
*/
#include "classejoueur.h"
#include "classede.h"
#include <iostream>
#include <stdlib.h>		//srand, rand
#include <time.h>
#include <string>
using namespace std;

//constructeur
Joueur::Joueur(string pse, De* de_1, De* de_2)
{
	pseudo = pse;
	de1 = de_1;
	de2 = de_2;
}

//\e[6;37;1m texte \e[0m  pour texte blanc en gras clignotant

string Joueur::get_pseudo()
{
	return pseudo;
}

int Joueur::get_point()
{
	return point;
}

void Joueur::jouer()
{
	de1->lancer();
	de2->lancer();
	
	if (de1->get_valeur() == 6)
		point = ++point;
	
	if (de2->get_valeur() == 6)
		point = ++point;
		
	
	
}

//destructeur
Joueur::~Joueur()
{
	
}

