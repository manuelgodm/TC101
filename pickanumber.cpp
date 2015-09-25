#include "iostream"
#include "time.h"
#include <stdlib.h>
using namespace std;

int main ()
{
  int secretnum, iguess,n;

  srand (time(NULL));
  secretnum = rand() % 100+1;
  n=0;

  cout << "I have a number chosen between 1 and 100" << endl;
  cout << "Please guess a number between 1 and 100: ";
  do{
    cin >> iguess;
    n=n+1;
    if (secretnum < iguess)
    {
      cout << "I´m sorry but "<< iguess << " is too high, try again: ";
    }
    else if (secretnum > iguess)
     {
      cout << "I´m sorry but "<< iguess << " is too low, try again: ";
    }
  } while (secretnum != iguess);

  cout << "You got it! The right answer is indeed " << iguess << endl;
  cout << "You made " << n <<" guesses to get the right number." << endl;
  return 0;
}
