#include <iostream>
using namespace std;

float raizmb(int n)
{
  int i;
  float t,p,r,b;
  for(i=1;r<n;i++)
  {
    r=i*i;
    b=i-1;
    cout << b << endl;
  }

  for(i=1;i<10;i++)
  {
    t=n/b;
    p=b+(t-b)/2;
    b=p;
  }
  return p;
}


int main()
{
  int n;
  cout << "Ingresa un numero para calcular su raiz cuadrada por el Metodo Babilonico: ";
  cin >> n;

  cout << "La raiz es: " << raizmb(n) << endl;
  return 0;
}
