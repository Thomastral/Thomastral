/*
Nom : Paillard
Prénom : Thomas
Utilité programme : 
1/ Calcul d'IMC
2/ Calcul du carré d'une valeur choisie
3/ Comparateur de 2 valeurs
4/ Fonction d'échange de deux valeurs décimales
5/ Compteur a limite définissable
6/ Verification pair/impair
7/ Comparateur de 3 valeurs
8/ Addition de pommes et poires
9/ Addition de deux valeurs choisies
10/ Calcul de surface
11/ Temps de charge de la Tesla
12/ Vitesse d'un pieton en m/s
*/

#include <stdio.h>
#include <stdlib.h>

//----------------------------------------------fonction qui affiche bonjour----------------------------------------------
void afficherbonjour()
{    
  printf("Bonjour !\n");   
}

//----------------------------------------------fonction calcul du carré d'un nombre choisi----------------------------------------------
int carre(int n)
{    
    return n*n;    
}

//----------------------------------------------fonction comparateur----------------------------------------------
int maximum(int x, int y)
{    
    if (x>y)
        return x;
        
    else
        return y;    
}

//----------------------------------------------fonction echange----------------------------------------------
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

//----------------------------------------------fonction Moyenne_5----------------------------------------------
float Moyenne_5(float nombr1, float nombr2, float nombr3, float nombr4, float nombr5)
{    
    float Somme=0.0;
    Somme=(nombr1+nombr2+nombr3+nombr4+nombr5)/5;
    return (Somme);
}

//----------------------------------------------fonction compteur----------------------------------------------
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

//----------------------------------------------fonction IMC----------------------------------------------
float IMC(float poids, float taille)
{
    float vIMC=0.0;
    vIMC=poids/(taille*taille);
    return (vIMC);
}

//----------------------------------------------fonction verif pair/impair----------------------------------------------
int verifpairimpair(int m)
{    
    return (m%2);
}

//----------------------------------------------partie comparateur de 3 valeurs----------------------------------------------
int max_trois(int p, int q, int r)
{
    if(p>q && p>r)
        return p;
        
    else if (q>p && q>r)
        return q;
    
    else
        return r;
}

//----------------------------------------------partie fruits exercice 4----------------------------------------------
void fruits(int pommes, int poires)
{
    int total=pommes+poires;
    printf("Vous avez %d pommes, %d poires ce qui fait un total de %d fruits \n",pommes, poires , total);
} 

//----------------------------------------------partie addition de deux valeurs choisies exercice 5----------------------------------------------
int add(int u, int o)
{
    int somme=u+o;
    return somme;
}

//----------------------------------------------partie calcul de puissance 2----------------------------------------------
int pui2(int base)
{
    int result=base*base;
    return result;
}

//----------------------------------------------calcul de surface----------------------------------------------
int surf(int longueur, int hauteur)
{
    int result=longueur*hauteur;
    return result;
}  

//----------------------------------------------temps de charge de la Tesla----------------------------------------------
int tps_charge(int puissance_borne)
{
    if(puissance_borne>0 && puissance_borne<100)
        return 30;
        
    else if (puissance_borne>100 && puissance_borne<200)
        return 15;
    
    else
        return 5;
}

//----------------------------------------------vitesse du pieton----------------------------------------------
int calcul_vitesse(int distance, int temps)
{
    int vitesse=distance/temps;
    return (vitesse);
}

//----------------------------------------------consommation energie----------------------------------------------
int calcul_energie(int puissance, int tps)
{
    int energie=puissance*tps;
    return (energie);
}

//----------------------------------------------fonction main----------------------------------------------
int main()
{    
    printf("Debut du programme global \n");
    printf("\n");
    
    afficherbonjour();
    printf("\n");
    
    int a;
    int x;
    int y;
    int valeursexe;
    float vIMC=0.0;
    float poids=0.0;
    float taille=0.0;
    int age=0;
    float Somme=0.0;
    float nombr1=0.0;
    float nombr2=0.0;
    float nombr3=0.0;
    float nombr4=0.0;
    float nombr5=0.0;
    compteur();
  
    //**********************************************Affichage Moyenne_5**********************************************
    printf("Debut programme Moyenne_5 \n");
    printf ("Valeur une = ");
    scanf("%f", &nombr1);
    printf ("Valeur deux = ");
    scanf("%f", &nombr2);
    printf ("Valeur trois = ");
    scanf("%f", &nombr3);
    printf ("Valeur quatre = ");
    scanf("%f", &nombr4);
    printf ("Valeur cinq = ");
    scanf("%f", &nombr5);
    Somme=Moyenne_5(nombr1, nombr2, nombr3, nombr4, nombr5);
    
    printf("La moyenne des cinq valeurs est %f \n", Somme);
    printf("\n"); 
    
    //**********************************************Affichage fonction IMC**********************************************
    printf("Tapez 0 si vous êtes un homme et 1 si vous êtes une femme.\n");
    scanf("%d", &valeursexe);
    printf("Votre poids en kg : ");
    scanf("%f", &poids);
    printf("Votre taille en metre : ");
    scanf("%f", &taille);
    printf("Votre age : ");
    scanf("%d", &age);
    printf("\n");
    vIMC=IMC(poids, taille);
    
    if(valeursexe==0)
    {
        printf("Bonjour, vous êtes un homme, vous avez %d ans vous pesez %f Kg,vous mesurez %f cm et votre IMC est de %f", age, poids, taille*100, vIMC);
        printf("\n");           
    }
    else
    {        
        printf("Bonjour, vous êtes une femme, vous avez %d ans vous pesez %f Kg,vous mesurez %f cm et votre IMC est de %f", age, poids, taille*100, vIMC);
        printf("\n");       
    } 
   
    //**********************************************partie affichage et selection des valeurs x et y**********************************************
    printf("Premiere valeur : ");
    scanf("%d", &x);
    printf("Deuxieme valeur : ");
    scanf("%d", &y);
    printf("La plus grande valeur entre %d et %d est %d. \n", x, y, maximum(x, y));
    printf("\n");
  
    //**********************************************selection de la valeur à passer au carre**********************************************
    printf("La valeur que vous voulez elever au carre est : ");
    scanf("%d", &a);
    printf("Le carre de %d est %d \n", a, carre(a));
    printf("\n");
   
    //**********************************************partie fonction échange**********************************************
    int nombre1 = 4;
    int nombre2 = 5;
    echange(nombre1, nombre2);
    printf("\n");
    
    //**********************************************partie fonction verif pair/impair**********************************************
    int m=0;    
    printf("Valeur à verifier : ");
    scanf("%d", &m);
    printf("\n");
    int resultatverifpair=verifpairimpair(m);    
    if(resultatverifpair==0)
        printf("%d est une nombre pair\n", m);          
      else
        printf("%d est un nombre impair\n", m);
   
    //**********************************************partie comparateur de 3 valeurs**********************************************
    int nombreA;
    int nombreB;
    int nombreC;
    
    printf("Nombre A : ");
    scanf("%d", &nombreA);
    printf("Nombre B : ");
    scanf("%d", &nombreB);
    printf("Nombre C : ");
    scanf("%d", &nombreC);
    
    int res = max_trois(nombreA, nombreB, nombreC);
    
    printf("Le plus grand nombre entre %d, %d et %d est %d \n", nombreA, nombreB, nombreC, res);
    printf("\n");
    
    //**********************************************partie fruits exercice 4**********************************************
    int pommes;
    int poires;
    printf("Nombre de pommes en votre possession : ");
    scanf("%d", &pommes);
    printf("Nombre de poires en votre possession : ");
    scanf("%d", &poires);
    fruits(pommes, poires);
    printf("\n");
  
    //**********************************************partie addition de deux valeurs choisies exercice 5**********************************************
    int u=0;
    int o=0;
    printf("Choisisez votre premiere valeur : ");
    scanf("%d", &u);
    printf("Choisissez votre deuxième valeur : ");
    scanf("%d", &o);
    add(x, y);
    printf("La somme de vos valeurs est : %d", add(x, y));
    printf("\n");
    
    //**********************************************partie calcul de puissance 2**********************************************
    int base=0;
    printf("Valeur a elever a carré : ");
    scanf("%d", &base);
    pui2(base);
    printf("La somme de vos valeurs est : %d", pui2(base));
    printf("\n");
    
    //**********************************************calcul de surface**********************************************
    int longueur=0;
    int hauteur=0;
    printf("Longueur de vore surface : ");
    scanf("%d", &longueur);
    printf("Hauteur de vore surface : ");
    scanf("%d", &hauteur);
    surf(longueur, hauteur);
    printf("La somme de vos valeurs est : %d", surf(longueur, hauteur));
  
    //**********************************************temps de charge de la Tesla**********************************************
    int puissance_borne=0;
    printf("Puissance de charge de votre borne en Kw : ");
    scanf("%d", &puissance_borne);
    printf("\n");
    int charge=tps_charge(puissance_borne);
    printf("Le temps de recharge de vore vehicule est de %d minutes \n", charge);
    printf("\n");
  
    //**********************************************vitesse du pieton**********************************************
    int distance=0;
    int temps=0;
    printf("Distance parcourue en metres : ");
    scanf("%d", &distance);
    printf("Temps de marche en secondes : ");
    scanf("%d", &temps);
    int vitesse=calcul_vitesse(distance, temps);
    printf("Vous marchez a %d m/S \n", vitesse);
    
    if(vitesse>15 && vitesse<20)
        printf("Vous marchez a vive allure.");
        
    else if (vitesse>5 && vitesse<10)
        printf("Vous marchez a allure moderee.");
    
    else if (vitesse>0 && vitesse<5)
        printf("Vous êtes plutôt lent.");
  
    //**********************************************consommation energie**********************************************
    int puissance=0;
    int tps=0;
    printf("Puissance en watt : ");
    scanf("%d", &puissance);
    printf("Temps de fonctionnement en heures : ");
    scanf("%d", &tps);
    int energie=calcul_energie(puissance, tps);
    printf("Votre appareil electrique a consomme %d kWh. \n", energie);
    
    if(energie>10)
        printf("Consommation forte.");
        
    else if (energie>5 && energie<10)
        printf("Consommation normale.");
    
    else if (energie>0 && energie<5)
        printf("Consommation faible.");
    
  
    printf("\n");
    printf("Fin du programme \n");
    
    return 0;    
}
