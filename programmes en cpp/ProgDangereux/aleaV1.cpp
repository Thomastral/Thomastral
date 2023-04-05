#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

int main() 
{
    // initialisation du generateur de nombres aleatoires
    srand(time(0)); 
    // definir la longueur du texte genere
    const int TAILLE_TEXTE = 1000000;
    // definir le nombre de caracteres disponibles
    const int NB_CARACTERES = 31; 

    // ouvrir le fichier en mode ecriture
    std::ofstream fichier("texte_genere.txt");

    for (int i = 0; i < TAILLE_TEXTE; i++) 
    {
        // generer un caractere aleatoire
        char caractere = 'a' + rand() % NB_CARACTERES; 
        // ecrire le caractere genere dans le fichier
        fichier << caractere; 
    }

    // fermer le fichier
    fichier.close();

    return 0;
}
