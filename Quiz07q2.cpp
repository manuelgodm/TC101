#include <iostream>
#include <string.h>
using namespace std;

bool palindrome(string x)
{
  int tam=x.length();
  string palabra="";
  int i=tam-1;
  do {
    palabra=palabra+x[i];
    i=i-1;
  } while (i>=0);

  if (x == palabra)
  {
    return true;
  } else {
    return false;
  }
}


int main ()
{
  string x;
  bool pal;
  cout << "Write a word, and I'll tell you if it's a palindrome: ";
  cin >> x;
  pal=palindrome(x);
  if (pal == true)
  {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }
  return 0;
}
