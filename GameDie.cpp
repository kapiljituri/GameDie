#include <cstdlib>
#include <stdlib.h>
#include <ctime>

using namespace std;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
  srand(time(NULL));
}

//return a random number between 1-6 (inclusive)
int GameDie::roll()
{
  return (rand()%6)+1;
}
