#include <iostream>
using namespace std;


int gmd(int m,int n)
{
  int r=1;
  if (m%n == 0)
  {
    return n;
  } else {
    while (r != 0)
    {
      r=m%n;
      m=n;
      n=r;
    }
    return m;
  }
}


int main()
{
  int codiv,m,n;
cout << "Ingrese dos valores positivos para calcular su Máximo Común Divisor." << endl;
cout << "Ingrese el numero mayor: ";
cin >> m;
cout << "Ingrese el numero menor: ";
cin >> n;

codiv= gmd(m,n);
cout << "El Máximo Común Divisor es: " << codiv << endl;
return 0;
}
