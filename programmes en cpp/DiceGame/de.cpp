/*
Program by : Thomas Paillard
Dice Game
fonctions
*/
#include "de.h"
#include <iostream>
#include <stdlib.h>		//srand, rand
#include <time.h>
using namespace std;

//constructeur
Dice::Dice() 
{
	srand (time(NULL));

	  /* genere un nombre entre valeur2 et valeur1 */
	  value = rand() % 6 + 1;
}

int Dice::roll()
{
	value = rand() % 6 + 1;
	
	return value;
}

int Dice::get_value()
{
	//printf("get_value fonctionne");
	
	return value;
}

//destructeur
Dice::~Dice()
{
	
}
