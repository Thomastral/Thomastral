/*
Program by : Thomas Paillard
Wolf Game
.h file
*/
#ifndef WOLF_H
#define WOLF_H

class Wolf 
{
  private:
    int weight;
    int teeth;
    int hunger;
    int stamina;
    int distancetraveled;
    char WolfName[250];

  public:
	Wolf();
	void ChooseWN();
	void event();
    void walk();
    void eat();
    void check();
    void status();
    ~Wolf();
};

#endif
