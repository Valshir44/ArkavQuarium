#ifndef GUPPY_H
#define GUPPY_H
#include "Fish.h"
#include "FishFood.h"
#include "LinkedList.h"
#include <iostream>

#define MAX_PHASE 3
#define FISH_PRICE 5

class Guppy : public Fish {
private:
  int phase; // Guppy phase
  int totalEatenFood; //total food this guppy eat
public:

  //Constructor
  // x and y,
  Guppy(int x, int y);
  ~Guppy();

  bool operator== (const Guppy &G);

  int getPhase();

  void eat();

  Coin makeCoin();

  void nextPhase();

  FishFood getNearestFood(LinkedList<FishFood> listFood);
};

#endif
