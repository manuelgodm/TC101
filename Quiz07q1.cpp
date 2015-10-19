#include <iostream>
using namespace std;

long fibonacci(long n)
{
  long int a=0,x=1,y=1,z=0;
  if (n < 2)
  {
    return n;
  }
  if (n == 2)
  {
    return 1;
  }
  do {
    z=x+y;
    x=y;
    y=z;
    a=a+1;
  }   while (a < n-2);
  return z;
}

int main()
{
  long n;
  cout << "Ingresa un numero: ";
  cin >> n;
  cout << "El numero en la secuencia fiboncci es: " << fibonacci(n) << endl;
  return 0;
}
