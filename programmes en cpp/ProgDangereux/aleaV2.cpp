#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>

int main() 
{
	// initialisation du generateur de nombres aleatoires
	srand(time(0)); 
    // definir la longueur du texte genere
    const int TAILLE_TEXTE = 1000000;
    // definir le nombre de caracteres disponibles
    const int NB_CARACTERES = 31; 

    // boucle pour generer plusieurs fichiers
    for (int i = 1; i <= 5; i++) 
    {
        // creer le nom de fichier
        std::string nomFichier = "texte_genere_" + std::to_string(i) + ".txt";
        // ouvrir le fichier en mode ecriture
        std::ofstream fichier(nomFichier);

        for (int j = 0; j < TAILLE_TEXTE; j++) 
        {
            // generer un caractere aleatoire
            char caractere = 'a' + rand() % NB_CARACTERES; 
            // ecrire le caractere genere dans le fichier
            fichier << caractere; 
        }

        // fermer le fichier
        fichier.close();
}

return 0;
