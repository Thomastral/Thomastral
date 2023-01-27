/*
Program by : Thomas Paillard
Dice Game
.h file
*/
#ifndef DICE_H
#define DICE_H

class Dice
{
  private:
    int value;
    int round;

  public:
	Dice();
	int roll();
	int get_value();
    ~Dice();
};
#endif
