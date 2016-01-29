#include <iostream>
#include "GameDie.h"

int main(){

  GameDie *gd = new GameDie();
  gd->roll();
  free(gd);

  return 0;
}
