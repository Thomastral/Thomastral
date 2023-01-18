/*
Program by : Thomas Paillard
Wolf Game
main
*/
#include "WolfAdv.h"
#include <iostream>
using namespace std;

int main() 
{
    Wolf wolf;

    while (true) 
    {
		printf("*************************************************************** \n");
        cout <<"1. Walk"<<endl;
        cout <<"2. Eat"<<endl;
        cout <<"3. Check Status"<<endl;
        cout <<"4. Choose wolf's name"<<endl;
        cout <<"5. Exit"<<endl;

        int choice;
        cin >> choice;

        if (choice == 1) 
        {
            wolf.walk();
        }
        else if (choice == 2) 
        {
            wolf.eat();
        }
        else if (choice == 3) 
        {
            wolf.check();
            wolf.status();
        }
        else if (choice == 4) 
        {
            wolf.ChooseWN();
        }
        else if (choice == 5)
        {
			break;
		}
    }
    return 0;
}
