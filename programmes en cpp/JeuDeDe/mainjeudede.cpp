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
	
	printf("\n\e[1;37m*********************************************************************************\e[0m\n\n");
	
	printf("\e[1;37mEnregistrement des joueurs\e[0m");
	printf("\n\n\n");
	
    printf("\e[37mJoueur A, entrez votre pseudo : \e[0m");
    scanf("%s", pseudoA);
    printf("\n\n");
    
    printf("\e[37mJoueur B, entrez votre pseudo : \e[0m");
    scanf("%s", pseudoB);
    printf("\n\n");
    
    printf("\e[1;37m********************************************************************************\e[0m\n\n");
	
	printf("\n");
	printf("\e[1m********************************************************************************\e[0m\n\n");
	
    cout << "\e[1mDebut de la partie\e[0m" << endl;
    printf("\n");
   
    De * de1 = new De();
    De * de2 = new De();
        
    //creation d'un nouveau joueur
    Joueur * joueurA = new Joueur(pseudoA, de1, de2);
    Joueur * joueurB = new Joueur(pseudoB, de1, de2);
    
    //lance des De
    joueurA->jouer();
	cout << "\e[37mTour de \e[0m" << joueurA->get_pseudo() << endl;
	printf("\n");
    cout << "\e[37mLe premier De est tombe sur la face \e[0m" << de1->get_valeur() << "\e[37m et le deuxieme De est tombe sur la face :\e[0m" << de2->get_valeur() << endl;
    cout << "" << joueurA->get_pseudo() << "\e[37m a obtenu un score de : \e[0m" << joueurA->get_point() << endl;
    printf("\n");
   
	printf("\e[37m********************************************************************************\e[0m\n\n");
   
    joueurB->jouer(); 
	cout << "\e[37mTour de \e[0m" << joueurB->get_pseudo() << endl;
	printf("\n");
    cout << "\e[37mLe premier De est tombe sur la face \e[0m" << de1->get_valeur() << "\e[37m et le deuxieme De est tombe sur la face :\e[0m" << de2->get_valeur() << endl;  
    cout << "" << joueurB->get_pseudo() << "\e[37m a obtenu un score de : \e[0m" << joueurB->get_point() << endl;
    printf("\n");
    
    printf("\e[1m********************************************************************************\e[0m\n\n");
        
    delete de1;
    delete de2;
    delete joueurA;
    delete joueurB;
    
    return 0;
}
