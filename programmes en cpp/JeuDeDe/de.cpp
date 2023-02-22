/*
Program by : Thomas Paillard
Jeu de de
fonctions
*/
#include "classede.h"
#include <iostream>
#include <stdlib.h>		//srand, rand
#include <time.h>
#include <string>
using namespace std;

//constructeur
De::De() 
{
	srand (time(NULL));

	  //genere un nombre entre valeur2 et valeur1
	  valeur = rand() % 6 + 1;
}

De::De(int NombreDeFace)
{
	nbFace = NombreDeFace;
} 


int De::lancer()
{
	valeur = rand() % 6 + 1;
	
	return valeur;
}

int De::get_valeur()
{
	//printf("get_valeur fonctionne");
	
	return valeur;
}

//destructeur
De::~De()
{
	
}

