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

  public:
	Wolf();
    void walk();
    void eat();
    void check();
    void status();
    ~Wolf();
};

#endif
