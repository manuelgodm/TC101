#include <iostream>
#include <iomanip>
 using namespace std;


float calculate_e(int precision)
{
  float a=1,e=1,i=1,r;
  int n=1,j;

  if (precision == 0)
  {
    return 2;
  }

  while (precision > 0)
  {
    a=a*0.1;
    precision--;
  }
  while(i > a)
  {
    r=1;
    j=n;
    while (j>1)
    {
      r=r*j;
      j--;
    }
    e= e + 1.0/r;
    i= 1.0/r;
    n++;
  }
 return e;
}

int main()
{
  int precision;

  cout << "Ingrese el numero de decimales de precision para e: ";
  cin >>  precision;

  cout << "El valor de e es: " << setprecision(precision+1) <<  calculate_e(precision) << endl;
  return 0;
}
