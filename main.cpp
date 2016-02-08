#include <iostream>
#include "GameDie.h"

int main(){

  int n = 4;
  cout << "Please enter 'n' (between 4 and 20): ";
  cin >> n;

  if(n < 4 || n > 20){
    cout << "Value of 'n' not in specified range." << endl;
    cout << "Exiting" << endl;
    return 1;
  }

  GameDie *gd = new GameDie();
  cout << gd->roll(n) << endl;
  free(gd);

  return 0;
}
