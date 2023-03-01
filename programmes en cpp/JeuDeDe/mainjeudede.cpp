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

//*****************************************comparateur de score*****************************************
int classement(int scoreA, int scoreB)
{
	if(scoreA>scoreB)
		return 1;
		
	else if(scoreA<scoreB)
		return 2;
		
	else if(scoreA==scoreB)
		return 3;
	
}

int main() 
{
	char pseudoA[1000];
	char pseudoB[1000];
	int recommencer=1;
	
	//debut de la partie avec enregistrement des joueurs avec leur pseudo
	printf("\n\e[1;37m*********************************************************************************\e[0m\n\n");
	
	printf("\e[1;37mEnregistrement des joueurs\e[0m");
	printf("\n\n\n");
	
    printf("\e[37mJoueur 1, entrez votre pseudo : \e[0m");
    scanf("%s", pseudoA);
    printf("\n\n");
    
    printf("\e[37mJoueur 2, entrez votre pseudo : \e[0m");
    scanf("%s", pseudoB);
    printf("\n\n");
    
    
	De * de1 = new De();
	De * de2 = new De();
	
		
	//creation d'un nouveau joueur
	Joueur * joueurA = new Joueur(pseudoA, de1, de2);
	Joueur * joueurB = new Joueur(pseudoB, de1, de2);
		
    
    printf("\e[1;37m********************************************************************************\e[0m\n\n");
	
	while(recommencer==1)
	{
		printf("\n");
		printf("\e[1m********************************************************************************\e[0m\n\n");
		
		cout << "\e[1mDebut de la partie\e[0m" << endl;
		printf("\n");
		
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
		
		printf("\e[1m********************************************************************************\e[0m\n\n");
		
		//partie comparateur de score affichage
		int scoreA=joueurA->get_point();
		int scoreB=joueurB->get_point();
				
		int res=classement(scoreA, scoreB);
		if (res==1)
		{
			cout << joueurA->get_pseudo() << "\e[37mest en tête\e[0m" << endl;
		}
		
		else if(res==2)
		{
			cout << joueurB->get_pseudo() << "\e[37mest en tête\e[0m" << endl;
		}
		
		else if(res==3)
		{
			cout << joueurA->get_pseudo() << "\e[37m et \e[0m" << joueurA->get_pseudo() << "\e[37m sont a egalite\e[0m" << endl;
		}
		
		//option rejouer
		printf("\n\n\e[1;37mSouhaitez vous continuer a jouer ?\n\n");
		printf("\e[5;1;37mEntrez 1 pour continuer ou 0 pour quitter le jeu\e[0m\n\n");
		scanf("%d", &recommencer);
		printf("\n\n");
	}
        
    delete de1;
    delete de2;
    delete joueurA;
    delete joueurB;
    
    return 0;
}
