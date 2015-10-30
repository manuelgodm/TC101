#include <iostream>
#include <cmath>
using namespace std;

double sen(double x,double n);
double potencia(double n);
double factorial(double n);

int main()
{
  double x,n;

  cout << "Ingresa valor de X: ";
  cin >> x;
  cout << "Ingresa valor de n: ";
  cin >> n;

  cout << "El seno es: " << sen(x,n) << endl;
  return 0;
}

double sen(double x,double n)
{
  double r,pot;
  if (-1 < x && x < 1)
  {
    cout << "Rango correcto" << endl;
  } else {
    cout << "Fuera de Rango" << endl;
  }
  pot=potencia(n);
  r=pow(x,pot)/factorial(pot);
  return r;
}

double potencia(double n)
{
  int p=(2*n)+1;
  return p;
}

double factorial(double n)
{
  int fac=1;
  for(int i=2;i<=n;i++)
  {
    fac=fac*i;
  }
  return fac;
}
