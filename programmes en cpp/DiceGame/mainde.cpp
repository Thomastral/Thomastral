/*
Program by : Thomas Paillard
Dice Game
main
*/
#include "de.h"
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
using namespace std;

int main() 
{
    Dice dice;
    int guess;
    
    cout << "\e[37;1mDice's face \e[32;1mbefore\e[0m the roll :\e[0m " << dice.get_value() << endl;
        
    cout << "\e[37;1mDice's face \e[36;1mafter\e[0m the roll :\e[0m " << dice.roll() << endl;
    
    dice.ChooseFnbr();
    
    return 0;
}
