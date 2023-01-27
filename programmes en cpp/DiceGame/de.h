/*
Program by : Thomas Paillard
Dice Game
* .h file
*/
#ifndef DICE_H
#define DICE_H

class Dice
{
  private:
    int valeur;

  public:
	Dice();
	int throw();
	int get_value();
    ~Dice();
};

#endif
