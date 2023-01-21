/*
Program by : Thomas Paillard
Wolf Game
fonctions
*/
#include "WolfAdv.h"
#include <iostream>
using namespace std;

//constructeur
Wolf::Wolf() 
{
	distancetraveled = 0;
    weight = 74;
    teeth = 42;
    hunger = 50;
    stamina = 50;
}

void Wolf::ChooseWN()
{
	printf("*************************************************************** \n");
	printf("Please enter a name for your Wolf \n");
	scanf("%s", &WolfName);
}

void Wolf::walk() 
{
	distancetraveled++;
    stamina--;
    hunger++;
    printf("*************************************************************** \n");
    printf("%s have traveled 1km \n", WolfName);
}

void Wolf::eat() 
{
    weight++;
    hunger--;
    teeth--;
    printf("*************************************************************** \n");
    printf("%s have eat a rabbit but he lost a teeth \n", WolfName);
}

void Wolf::check() 
{
    if (hunger >= 100) 
    {
        weight--;
        printf("*************************************************************** \n");
        printf("Le %s a faim, il doit manger \n", WolfName);
    }
    
    if (stamina <= 0) 
    {
        teeth--;
        printf("*************************************************************** \n");
        printf("%s is hungry, he need to eat \n", WolfName);
    }
}

void Wolf::status() 
{
	printf("*************************************************************** \n");
	printf("%s's status :\n", WolfName);
    cout <<"Weight : "<< weight <<" kg"<<endl;
    cout <<"Teeth : "<< teeth <<endl;
    cout <<"Hunger : "<< hunger <<" %"<<endl;
    cout <<"Stamina : "<< stamina <<" %"<<endl;
    cout <<"Total distance traveled : "<< distancetraveled <<" km"<<endl;
}

//destructeur
Wolf::~Wolf()
{
	
}
