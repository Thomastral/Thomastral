/*
Program by : Thomas Paillard
Jeu du Tic Tac Toe
*/

#include <iostream>

using namespace std;

char tableau[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
char joueur = 'X';
bool partie_terminee = false;

void dessiner_tableau() 
{
    system("clear");
    cout << "\n\n\t\e[37;1m   Tic Tac Toe\e[0m\n\n";
    cout << "\e[37mJoueur 1 (\e[0m\e[31;1mX\e[0m\e[37m) - Joueur 2 (\e[0m\e[31;1mO\e[0m\e[37m)\e[0m" << endl << endl;
    cout << "\t\e[37m     |     |     \e[0m" << endl;
    cout << "\t  " << tableau[0][0] << "\e[37m  |  \e[0m" << tableau[0][1] << "\e[37m  |  \e[0m" << tableau[0][2] << endl;
    cout << "\t\e[37m_____|_____|_____\e[0m" << endl;
    cout << "\t\e[37m     |     |     \e[0m" << endl;
    cout << "\t  " << tableau[1][0] << "\e[37m  |  \e[0m" << tableau[1][1] << "\e[37m  |  \e[0m" << tableau[1][2] << endl;
    cout << "\t\e[37m_____|_____|_____\e[0m" << endl;
    cout << "\t\e[37m     |     |     \e[0m" << endl;
    cout << "\t  " << tableau[2][0] << "\e[37m  |  \e[0m" << tableau[2][1] << "\e[37m  |  \e[0m" << tableau[2][2] << endl;
    cout << "\t\e[37m     |     |     \e[0m" << endl << endl;
}

void tour_de_jeu() 
{
    char choix;
    int ligne, colonne;
    cout << "\e[37mC'est le tour du joueur \e[31;1m" << joueur << "\e[0m\e[37m. \n\nEntrez un nombre pour choisir votre case : \e[0m";
    cin >> choix;
    printf("\n");
    
    switch (choix) 
    {
        case '1':
            ligne = 0;
            colonne = 0;
            break;
        case '2':
            ligne = 0;
            colonne = 1;
            break;
        case '3':
            ligne = 0;
            colonne = 2;
            break;
        case '4':
            ligne = 1;
            colonne = 0;
            break;
        case '5':
            ligne = 1;
            colonne = 1;
            break;
        case '6':
            ligne = 1;
            colonne = 2;
            break;
        case '7':
            ligne = 2;
            colonne = 0;
            break;
        case '8':
            ligne = 2;
            colonne = 1;
            break;
        case '9':
            ligne = 2;
            colonne = 2;
            break;
        default:
            cout << "\e[33;1mChoix invalide. Veuillez choisir un nombre entre 1 et 9.\e[0m\n";
            tour_de_jeu();
            break;
    }
    
    if (tableau[ligne][colonne] != 'X' && tableau[ligne][colonne] != 'O') 
    {
        tableau[ligne][colonne] = joueur;
        if (joueur == 'X') 
        {
            joueur = 'O';
        } else 
        
        {
            joueur = 'X';
        }
        
    } else 
    
    {
        cout << "\e[33;1mCase déjà occupée. Veuillez choisir une autre case.\e[0m\n";
        tour_de_jeu();
    }
}

bool verifier_victoire() 
{
    for (int i = 0; i < 3; i++) 
    {
        if (tableau[i][0] == tableau[i][1] && tableau[i][1] == tableau[i][2]) 
        {
            return true;
        }
        
        if (tableau[0][i] == tableau[1][i] && tableau[1][i] == tableau[2][i]) 
        {
			return true;
		}
	}

	if (tableau[0][0] == tableau[1][1] && tableau[1][1] == tableau[2][2]) 
	{
		return true;
	}

	if (tableau[0][2] == tableau[1][1] && tableau[1][1] == tableau[2][0]) 
	{
		return true;
	}

	return false;
}

bool verifier_match_nul() 
{
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			
			if (tableau[i][j] != 'X' && tableau[i][j] != 'O') 
			{
				return false;
			}
		}
	}
	
return true;
}

void jouer() 
{
	while (!partie_terminee) 
	{
		dessiner_tableau();
		tour_de_jeu();
		if (verifier_victoire()) 
		{
			dessiner_tableau();
			cout << "\e[37mLe joueur\e[0m \e[31;1m" << joueur << " \e[0m\e[37ma perdu !\e[0m\n";
			partie_terminee = true;
		} else if (verifier_match_nul()) 
		
		{
			dessiner_tableau();
			cout << "\e[37mMatch nul !\e[0m\n";
			partie_terminee = true;
		}
	}
	
	char choix;
	cout << "\n\e[37mVoulez-vous rejouer ? (1 pour oui, 0 pour non) : \e[0m";
	cin >> choix;

	if (choix == '1') 
	{
		// Réinitialiser le tableau
		tableau[0][0] = '1';
		tableau[0][1] = '2';
		tableau[0][2] = '3';
		tableau[1][0] = '4';
		tableau[1][1] = '5';
		tableau[1][2] = '6';
		tableau[2][0] = '7';
		tableau[2][1] = '8';
		tableau[2][2] = '9';
		
		joueur = 'X';
		partie_terminee = false;
		jouer(); // Appel récursif de la fonction jouer() pour relancer une partie
	} 
	
	else 
	{
		cout << "\n\e[37mMerci d'avoir joué au Tic Tac Toe ! À bientôt !\e[0m\n" << endl;
	}
}

int main() 
{
	jouer();
		
	return 0;
}
