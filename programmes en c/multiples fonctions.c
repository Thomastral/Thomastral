/*
Nom : 
Paillard

Prénom : 
Thomas

Utilité programme : 
Calcul d'IMC
Calcul du carré d'une valeur choisie
Comparateur de 2 valeurs
Fonction d'échange de deux valeurs décimales
Compteur a limite définissable
Verification pair/impair
*/

#include <stdio.h>
#include <stdlib.h>

//fonction qui affiche bonjour
void afficherbonjour()
{
    
  printf("Bonjour !\n");
  
   
}

//fonction calcul du carré d'un nombre choisi
int carre(int n)
{
    
    return n*n;
    
}

int maximum(int x, int y)
{
    
    if (x>y)
        return x;
        
    else
        return y;
    
}

//fonction echange
void echange(int nombre1, int nombre2)
{
 
    printf("Debut programme d'echange de deux valeurs \n");
    printf ("Avant echange le nombre 1 reçu est : %d \nAvant echange le nombre 2 reçu est : %d \n", nombre1, nombre2);
    int temp = nombre1;
    nombre1 = nombre2;
    nombre2 = temp;
    printf("\n");
    printf ("Apres echange le nombre 1 reçu est : %d \nApres echange le nombre 2 reçu est : %d \n", nombre1, nombre2);
  
}

//fonction moyenne_5
void Moyenne_5()
{
    
    float nombre1, nombre2, nombre3, nombre4, nombre5, Somme;
    
    printf("Debut programme Moyenne_5 \n");
    printf ("Valeur une = ");
    scanf("%f", &nombre1);
    
    printf ("Valeur deux = ");
    scanf("%f", &nombre2);
    
    printf ("Valeur trois = ");
    scanf("%f", &nombre3);
    
    printf ("Valeur quatre = ");
    scanf("%f", &nombre4);
    
    printf ("Valeur cinq = ");
    scanf("%f", &nombre5);
    
    Somme=nombre1+nombre2+nombre3+nombre4+nombre5;
    printf("La moyenne des cinq valeurs est %f \n", Somme/5);
    printf("\n");
    
}

//fonction compteur
void compteur ()
{
    
   int compteur=0;
   int fin;
   
   printf("Debut programme compteur \n");
   printf("La valeur maximum qu'atteindra votre compteur est : ");
   scanf("%d", &fin);
   
   while(compteur<fin+1)
   {
       
       printf("Compteur = %d \n", compteur);
       compteur++;
       
   }
    printf("\n");
}

//fonction IMC
void IMC()
{
    
    float IMC=0;
    float poids=0;
    float taille=0;
    int age=0;
    int valeursexe;
   
    printf("Tapez 0 si vous êtes un homme et 1 si vous êtes une femme.\n");
    scanf("%d", &valeursexe);
    
    printf("Votre poids en kg : ");
    scanf("%f", &poids);
    
    printf("Votre taille en metre : ");
    scanf("%f", &taille);
    
    printf("Votre age : ");
    scanf("%d", &age);
    printf("\n");
    
    IMC=poids/(taille*taille);
    
    if (valeursexe==0)
    {
        printf("Bonjour, vous êtes un homme, vous avez %d ans vous pesez %f Kg,vous mesurez %f cm et votre IMC est de %f", age, poids, taille*100, IMC);
        printf("\n");           
    }
    else
        {        
            printf("Bonjour, vous êtes une femme, vous avez %d ans vous pesez %f Kg,vous mesurez %f cm et votre IMC est de %f \n", age, poids, taille*100, IMC);
            printf("\n");       
        }        
    printf("\n");       
}

//fonction verif pair/impair
int verifpairimpair(int m)
{    
    return (m%2);
}

//fonction main
int main()
{
    
    printf("Debut du programme global \n");
    printf("\n");
    
    afficherbonjour();
    printf("\n");
    
    int a;
    int x;
    int y;
    Moyenne_5();
    compteur();
    IMC();
    
    //partie affichage et selection des valeurs x et y
    printf("Premiere valeur : ");
    scanf("%d", &x);
    printf("Deuxieme valeur : ");
    scanf("%d", &y);
    printf("La plus grande valeur entre %d et %d est %d. \n", x, y, maximum(x, y));
    printf("\n");
    
    //selection de la valeur à passer au carre
    printf("La valeur que vous voulez elever au carre est : ");
    scanf("%d", &a);
    printf("Le carre de %d est %d \n", a, carre(a));
    printf("\n");
    
    //partie fonction échange
    int nombre1 = 4;
    int nombre2 = 5;
    echange(nombre1, nombre2);
    printf("\n");
    
    //partie fonction verif pair/impair
    int m=0;    
    printf("Valeur à verifier : ");
    scanf("%d", &m);
    printf("\n");
    int resultatverifpair=verifpairimpair(m);    
    if(resultatverifpair==0)
        printf("%d est une nombre pair\n", m);          
      else
        printf("%d est un nombre impair\n", m);
    
    printf("\n");
    printf("Fin du programme \n");
    
    return 0;
    
}
