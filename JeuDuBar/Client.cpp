#include "Client.h"
#include "Serveur.h"
#include <iostream>

using namespace std;

void Client::commanderCafe() 
{
	int x = 0;
	
	cout << "\e[1;31mClient : \e[1;37mJe souhaite passer commande svp !\e[0m" << endl;
	cout << " "<< endl;
	cout << "\e[1;34mServeur : \e[1;37mQue desirez vous commander ?" << endl;
	cout << "          \e[1;37mNous avons du cafe (1), des pintes (2), du jus de fruit (3) et du champagne (4)." << endl;
	cout << " "<< endl;
	cout << "\e[1;31mClient :\e[1;37m ";
	cin >> x;
	cout << "\e[0m";
	cout << " "<< endl;
}

void Client::payer() 
{
	cout << "\e[1;31mClient : \e[1;37mEt voici 50€ !\e[0m" << endl;
	cout << " "<< endl;
	
	serveur -> rendreMonnaie();
}

void Client::boire() 
{
	cout << "\e[1;31mClient : \e[1;37m*Sluuurp* Excellent !\e[0m" << endl;
	cout << " "<< endl;
}

