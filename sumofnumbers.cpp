#include "iostream"
using namespace std;

int main ()
{
  int lower, upper,sum,number;
  sum=0;
  cout << "We will calculate the sum of the integers in the range you provide." << endl;
  cout << "Please give us the lower bound: ";
  cin >> lower;
  number=lower;
  cout << "Please give us the upper bound: ";
  cin >> upper;

  do{
    sum=sum+number;
    number=number+1;

  } while (number <= upper);

  cout << "The sum from " << lower << " to " << upper << " (inclusive) is: " << sum << endl;
  return 0;
}
