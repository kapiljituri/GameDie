#include <iostream>
#include "GameDie.h"

int main(){

  int i=0;
  GameDie *gd = new GameDie();
  cout << gd->roll() << endl;
  free(gd);

  return 0;
}
