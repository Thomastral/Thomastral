#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

/*
int main()

{
    
    //déclaration variable a
    int a;
    //définition du texte à afficher
    printf(" Rentrez votre valeur a : ");
    //définition de la valeur à analyser et pointeur pour selectionner la source de la valeur
    scanf("%d", &a);
    //définition du texte à afficher
    printf("variable a vaut : %d", a);
    printf("\n");
    
    //déclaration variable b
    int b;
    //définition du texte à afficher
    printf(" Rentrez votre valeur b : ");
    //définition de la valeur à analyser et pointeur pour selectionner la source de la valeur
    scanf("%d", &b);
    //définition du texte à afficher
    printf("variable b vaut : %d", b);
    printf("\n");    
   
    int c = a + b;
    //définition du texte à afficher
    printf("Variable c vaut : %d", c);
    printf("\n");
    
    //calcul IMC avec float pour comptabiliser les valeurs avec des nombres après la virgule
    float Taille;
    printf(" Veuillez saisir votre taille en m : ");
    scanf("%f", &Taille);
    printf("Taille vaut : %f", Taille);
    printf("\n");
    
    int Poids;
    printf(" Veuillez saisir votre poids en kg : ");
    scanf("%d", &Poids);
    printf("Poids vaut : %d", Poids);
    printf("\n");
    
    //ici on déclare la valeur d'IMC qui vaut poids divisé par le carré de la taille
    float IMC = Poids / (Taille * Taille); 
    printf(" Votre IMC est de : %f", IMC);
    printf("\n");
  
    return 0;
    
}
*/
/*
//fonction echange
void echange(int nombre1, int nombre2)
{
 
    printf ("Avant echange le nombre 1 reçu est : %d \nAvant echange le nombre 2 reçu est : %d \n", nombre1, nombre2);
    int temp = nombre1;
    nombre1 = nombre2;
    nombre2 = temp;
    printf("\n");
    printf ("Apres echange le nombre 1 reçu est : %d \nApres echange le nombre 2 reçu est : %d \n", nombre1, nombre2);
  
}

int main()
{
    printf("Début du programme \n");
    printf("\n");
    int nombre1 = 4;
    int nombre2 = 5;
    echange(nombre1, nombre2);
    
   return 0;
}
*/
/*
//fonction moyenne
void Moyenne_5()
{
    
    float nombre1, nombre2, nombre3, nombre4, nombre5, Somme;
    
    printf (" Entrez la valeur une \n");
    scanf("%f", &nombre1);
    
    printf (" Entrez la valeur deux \n");
    scanf("%f", &nombre2);
    
    printf (" Entrez la valeur trois \n");
    scanf("%f", &nombre3);
    
    printf (" Entrez la valeur quatre \n");
    scanf("%f", &nombre4);
    
    printf (" Entrez la valeur cinq \n");
    scanf("%f", &nombre5);
    
    Somme=nombre1+nombre2+nombre3+nombre4+nombre5;
    printf(" La moyenne des cinq valeurs est %f \n", Somme/5);
    
    
}

int main()
{
    
    Moyenne_5();
    printf("Début du programme \n");
    
    return 0;
    
}
*/
/*
//fonction compteur
void compteur ()
{
    
   int compteur=0;
   int fin;
   
   printf(" Selectionnez une limite à votre compteur \n");
   scanf("%d", &fin);
   
   
   while(compteur<fin+1)
   {
       
       printf(" Compteur = %d \n", compteur);
       compteur++;
       
   }
    
}

int main()
{
    
    compteur();
    printf("Début du programme \n");
    
    return 0;
    
}
*/
void IMC()
{
    
    float IMC;
    float poids;
    float taille;
    int age;
    char sexe[20];
    int n;
   
    printf(" Tapez 0 si vous êtes un homme et 1 si vous êtes une femme.\n");
    scanf("%d", n);
    
    if (n==0)
    {
        
        sexe=homme;
        
    }
    else
        {
        
            sexe=femme;
        
        }
        
    printf("  Veuillez saisir votre poids en kg.\n");
    scanf("%f", &poids);
    
    printf(" Veuillez saisir votre taille en m.\n");
    scanf("%f", &taille);
    
    printf(" Veuillez saisir votre age.\n");
    scanf("%d", &age);
    
    IMC=poids/(taille*taille);
    
    printf("Bonjour, vous êtes un(e) %c, vous avez %d ans vous pesez %f Kg,vous mesurez %f cm et votre IMC est de %f", sexe, age, poids, taille*100, IMC);
   
   
}

int main()
{
    
    IMC();
    printf("Début du programme \n");
    
    return 0;
    
}
