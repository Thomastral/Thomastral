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
    
    cout << "Dice's face before the roll : " << dice.get_value() << endl;
        
    cout << "Dice's face after the roll : " << dice.roll() << endl;
    
    return 0;
}
