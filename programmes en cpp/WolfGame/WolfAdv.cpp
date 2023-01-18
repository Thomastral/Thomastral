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

void Wolf::walk() 
{
	distancetraveled++;
    stamina--;
    hunger++;
    printf("*************************************************************** \n");
    printf("Le loup a parcouru 1km \n");
}

void Wolf::eat() 
{
    weight++;
    hunger--;
    teeth--;
    printf("*************************************************************** \n");
    printf("Le loup a devore une proie, mamheureusement il a perdu une dent \n");
}

void Wolf::check() 
{
    if (hunger >= 100) 
    {
        weight--;
        printf("*************************************************************** \n");
        printf("Le loup a faim, il doit manger \n");
    }
    
    if (stamina <= 0) 
    {
        teeth--;
        printf("*************************************************************** \n");
        printf("Le loup est fatigué, il doit manger \n");
    }
}

void Wolf::status() 
{
	printf("*************************************************************** \n");
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
