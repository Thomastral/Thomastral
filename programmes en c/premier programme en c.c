#include <stdio.h>
#include <stdlib.h>

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
    
    /*variable c = a + b*/
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
