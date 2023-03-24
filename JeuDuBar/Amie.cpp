#include "Amie.h"
#include "Barman.h"
#include "Serveur.h"
#include "Percolateur.h"
#include "Client.h"
#include <iostream>

using namespace std;

Amie::Amie() 
{
	Barman *b = new Barman;
	Client *c = new Client;
	Serveur *s = new Serveur;
	Percolateur *p = new Percolateur;
	
	c -> serveur = s;
	s -> client = c;
	s -> barman = b;
	b -> serveur = s;
	b -> perco = p;
	
	s -> demarrerFonctionnement();
	
	delete b;
	delete s;
	delete c;
	delete p;
}

Amie::~Amie() 
{
	
}

