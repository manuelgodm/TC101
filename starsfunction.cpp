#include "iostream"
using namespace std;

char stars(char b)
{
  char st='*';
  return st;
}

int main()
{
  int a,d,c;
  c=0;
  cout << "Please write the number of stars: ";
  cin >>a;
  do
  {
    cout << stars(d);
    c=c+1;
  } while (c != a);
  return 0;
}
