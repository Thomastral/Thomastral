/*
Program by : Thomas Paillard
Wolf Game
fonctions
*/
#include "WolfAdv.h"
#include <iostream>
#include <stdlib.h>		/* srand, rand */
#include <time.h>
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
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\e[6;37;1mPlease enter a name for your Wolf\e[0m \n");
	scanf("%s", &WolfName);
	printf("\n\n\n\n\n\n\n\n");
}

void Wolf::walk() 
{
	distancetraveled++;
    stamina--;
    hunger++;
    printf("*************************************************************** \n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\e[1m%s\e[0m have traveled 1km ", WolfName);
}

void Wolf::eat() 
{
    weight++;
    hunger--;
    printf("*************************************************************** \n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\e[1m%s\e[0m have \e[31;1meat a rabbit\e[0m but he lost a \e[37mteeth\e[0m \n", WolfName);
}

void Wolf::status() 
{
	printf("*************************************************************** \n");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\e[1m%s's\e[0m status :\n\n", WolfName);
    cout <<"\e[35;1mWeight\e[0m : "<< weight <<" kg"<<endl;
    cout <<"\e[37mTeeth\e[0m : "<< teeth <<endl;
    cout <<"\e[33;1mHunger\e[0m : "<< hunger <<" %"<<endl;
    cout <<"\e[36;1mStamina\e[0m : "<< stamina <<" %"<<endl;
    cout <<"Total distance traveled : "<< distancetraveled <<" km"<<endl;
    
    if (hunger >= 80) 
    {
        weight--;
        printf("\e[1m%s\e[0m is hungry, he need to eat \n", WolfName);
    }
    
    if (stamina <= 10) 
    {
        teeth--;
        printf("\e[1m%s\e[0m is \e[36mlow on stamina\e[0m, he \e[34;1mneed to sleep\e[0m\n", WolfName);
    }
}

void Wolf::event()
{
	printf("*************************************************************** \n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("%s is hungry, he need to eat \n", WolfName);
}

//destructeur
Wolf::~Wolf()
{
	
}
