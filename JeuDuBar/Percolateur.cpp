#include "Percolateur.h"
#include <iostream>

using namespace std;

void Percolateur::lancerPreparation() 
{
	cout << "\e[1;32mPercolateur : \e[1;37;3;2mVotre commande est en cours de préparation\e[0m" << endl;
	cout << " " << endl;
}

void Percolateur::creerCafe() 
{
	cout << "\e[1;32mPercolateur : \e[1;37m*Cling !* \e[1;37;3;2mVotre commande est prête\e[0m" << endl;
	cout << " " << endl;
}

