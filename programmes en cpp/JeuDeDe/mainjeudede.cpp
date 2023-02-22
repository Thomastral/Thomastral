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
using namespace std;

int main() 
{
    cout << "Debut de la partie" << endl;
    
    De * de1 = new De();
    De * de2 = new De();
    
    Joueur * joueur = new Joueur("François", de1, de2);
    
    cout << "le joueur s'appelle " << joueur->get_pseudo() << endl;
    
    cout<< joueur->get_point() <<endl;
    joueur->jouer();
    cout<< joueur->get_point() <<endl;
    
    delete de1;
    delete de2;
    
    return 0;
}
