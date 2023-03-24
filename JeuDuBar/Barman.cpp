#include "Barman.h"
#include "Serveur.h"
#include "Percolateur.h"
#include <iostream>

using namespace std;

void Barman::preparerCafe() 
{
	cout << "\e[1;36mBarman : \e[1;37mJe m'en occupe !\e[0m" << endl;
	cout << " " << endl;
	
	perco -> lancerPreparation();
	perco -> creerCafe();
	preparerPlateau();
}

void Barman::preparerPlateau() 
{
	cout << "\e[1;36mBarman : \e[1;37;3;2mRecupère le café sur un plateau\e[0m" << endl;
	cout << " " << endl;
	
	serveur -> servirCafe();
}
