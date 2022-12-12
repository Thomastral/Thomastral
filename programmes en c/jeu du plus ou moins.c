/*
Paillard Thomas
Jeu du plus ou moins
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//----------------------------------------------selection du mode de jeu----------------------------------------------
int modedejeu(int mode)
{
    if (mode==1)
    {
        printf("                     Vous avez selectionne le mode solo\n");
        printf("\n");
        return 1;
    }
    else if (mode==2)
        printf("                     Vous avez selectionne le mode duo\n");
        printf("\n");
        return 2;
    
}

//----------------------------------------------selectin de difficulte----------------------------------------------
int difficulte(int diff)
{
    if (diff==1)
    {
        printf("                     Vous avez selectionne le mode facile\n");
        printf("\n");
        return 100;
    }
    else if (diff==2)
    {
        printf("                     Vous avez selectionne le mode normal\n");
        printf("\n");
        return 1000;
    }
    else if (diff==3)
        printf("                     Vous avez selectionne le mode difficile\n");
        printf("\n");
        return 10000;
}

//----------------------------------------------fonction jeu----------------------------------------------
//**********************************************main**********************************************
int main ( int argc, char* argv )
{
    int rejouer=0;
    while (rejouer==0)
    {
        //definition des variables
        int mode;
        int diff;
        int nbrMAX=0;
        int nombre_mystere=0;
        int selection=0;
        int nbrMystJ1=0;
        
        //**********************affichage du menu selection du mode de jeu**********************
        printf("--------------------------------------------------------------------------\n");
        printf("                         Selection du mode de jeu\n");
        printf("--------------------------------------------------------------------------\n");
        printf("                   Pour selectionner le mode solo entrez 1\n");
        printf("                   Pour selectionner le mode duo entrez 2\n");
        scanf("%d", &mode);
        printf("--------------------------------------------------------------------------\n");
        selection=modedejeu(mode);
        
        if (selection==1)
        {
        //**********************affichage du menu selection de difficulte**********************
        printf("**************************************************************************\n");
        printf("                         Selection de la difficulte\n");
        printf("**************************************************************************\n");
        printf("                     Entrez 1 pour la difficulte facile\n");
        printf("                     Entrez 2 pour la difficulte normal\n");
        printf("                     Entrez 3 pour la difficulte difficile\n");
        scanf("%d", &diff);
        printf("**************************************************************************\n");
        nbrMAX=difficulte(diff);
        }
        
        int tour=0;
        int nombre_entre = 0;
        const int MIN = 1;
        
        if(selection==1)
        {
            nombre_mystere = (rand() % (nbrMAX - MIN + 1)) + MIN;
            do
                {
                    //mise à jour du compte tour
                    tour++;
                    printf("***Tour numéro %d ***\n", tour);
                    // On demande le nombre
                    printf("**Quel est le nombre ?**\n");
                    scanf("%d", &nombre_entre);
                    // On compare le nombre entré avec le nombre mystère
                    if (nombre_mystere > nombre_entre)
                    printf("*C'est plus !*\n\n");
                    else if (nombre_mystere < nombre_entre)
                    printf("*C'est moins !*\n\n");
                    else
                    printf ("Bravo, vous avez trouve le nombre mystere en %d tours !\n\n", tour);
                } 
            while (nombre_entre != nombre_mystere);
        }
        
        else if (selection==2)
        {
            printf("                Joueur 1, choisissez le nombre mystere\n");
            scanf("%d", &nbrMystJ1);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            do
                {
                    //mise à jour du compte tour
                    tour++;
                    printf("***Tour numéro %d ***\n", tour);
                    // On demande le nombre
                    printf("**Quel est le nombre ?**\n");
                    scanf("%d", &nombre_entre);
                    // On compare le nombre entré avec le nombre mystère
                    if (nbrMystJ1 > nombre_entre)
                    printf("*C'est plus !*\n\n");
                    else if (nbrMystJ1 < nombre_entre)
                    printf("*C'est moins !*\n\n");
                    else
                    printf ("Bravo, vous avez trouve le nombre mystere en %d tours !\n\n", tour);
                } 
            while (nombre_entre != nbrMystJ1);
        }
        printf("==========================================================================\n");
        printf("                       Pour rejouer entrez 0\n");
        printf("                       Pour arreter entrez 1\n");
        scanf("%d", &rejouer);
        printf("==========================================================================\n");
    }
    return 0;
}
