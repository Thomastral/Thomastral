/*
Program by : Thomas Paillard
Jeu de de
main
*/
#include "classede.h"
#include "classejeu.h"
#include "classejoueur.h"
#include <iostream>
#include <stdlib.h>     //srand, rand
#include <time.h>
#include <list>
using namespace std;

int main() 
{
	char pseudoA[1000];
	char pseudoB[1000];
	
	printf("\n\n");
	printf("\e[1;37mEnregistrement des joueurs\e[0m");
	printf("\n\n\n");
	
    printf("\e[1;37mJoueur A, entrez votre pseudo : \e[0m");
    scanf("%s", pseudoA);
    printf("\n\n");
    
    printf("\e[1;37mJoueur B, entrez votre pseudo : \e[0m");
    scanf("%s", pseudoB);
    printf("\n\n");
	
	printf("\n");
    cout << "\e[1mDebut de la partie\e[0m" << endl;
    printf("\n");
   
    De * de1 = new De();
    De * de2 = new De();
        
    //creation d'un nouveau joueur
    Joueur * joueurA = new Joueur(pseudoA, de1, de2);
    Joueur * joueurB = new Joueur(pseudoB, de1, de2);
    
    //lance des De
    joueurA->jouer();
    cout << "" << joueurA->get_pseudo() << "\e[37m a obtenu un score de : \e[0m" << joueurA->get_point() << endl;
    printf("\n");
   
    joueurB->jouer();    
    cout << "" << joueurB->get_pseudo() << "\e[37m a obtenu un score de : \e[0m" << joueurB->get_point() << endl;
    printf("\n\n");
        
    delete de1;
    delete de2;
    
    return 0;
}
