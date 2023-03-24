#include "Serveur.h"
#include "Client.h"
#include "Barman.h"
#include <iostream>

using namespace std;

float Serveur::rendreMonnaie() 
{
	cout << "\e[1;34mServeur : \e[1;37mTenez, voici votre monnaie. \e[1;37;3;2mLe serveur vous tend 45€\e[0m" << endl;
	cout << " " << endl;
	
	client -> boire();
	
	return 0;
}

void Serveur::servirCafe() 
{
	cout << "\e[1;34mServeur : \e[1;37mVoici votre café !\e[0m" << endl;
	cout << " " << endl;
	cout << "\e[1;34mServeur : \e[1;37mCela fera 5€ s'il vous plaît.\e[0m" << endl;
	cout << " "<< endl;
	
	client -> payer();
}

void Serveur::demarrerFonctionnement() 
{
	cout << " " << endl;
	cout << "\e[1;34mServeur : \e[1;37;3;2mPart prendre une commande\e[0m" << endl;
	cout << " " << endl;
	
	client -> commanderCafe();
	barman -> preparerCafe();
}

