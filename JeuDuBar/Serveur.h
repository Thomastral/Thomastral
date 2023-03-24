#ifndef _SERVEUR_H
#define _SERVEUR_H
#include <iostream>
using namespace std;

class Barman;
class Client;
class Serveur 
{
	friend class Amie;
	private:
		Client *client;
		Barman *barman;
		
	public:
		float rendreMonnaie();
		void servirCafe();
		void demarrerFonctionnement();
};
#endif
