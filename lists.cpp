#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float t=0,p=0,d=0;
  int i;
  float numbers[10];
  cout << "Ingresa 10 numeros y calculare la suma total, su promedio y su desviacion estandar" << endl;
  cout << "Ingresa el primer numero: ";
  cin >> numbers[0];
  cout << "Ingresa el segundo numero: ";
  cin >> numbers[1];
  cout << "Ingresa el tercer numero: ";
  cin >> numbers[2];
  cout << "Ingresa el cuarto numero: ";
  cin >> numbers[3];
  cout << "Ingresa el quinto numero: ";
  cin >> numbers[4];
  cout << "Ingresa el sexto numero: ";
  cin >> numbers[5];
  cout << "Ingresa el septimo numero: ";
  cin >> numbers[6];
  cout << "Ingresa el octavo numero: ";
  cin >> numbers[7];
  cout << "Ingresa el noveno numero: ";
  cin >> numbers[8];
  cout << "Ingresa el decimo numero: ";
  cin >> numbers[9];

  for(i=0;i<10;i++)
  {
    t=t+numbers[i];
  }

  p=t/10;

  for(i=0;i<10;i++)
  {
    d=d+(numbers[i]-p)*(numbers[i]-p);
  }
  d=d/10;
  d=sqrt(d);
  
  cout << "La suma total es: " << t << endl;
  cout << "El promedio es: " << p << endl;
  cout << "La desviacion estandar es: " << d << endl;
  return 0;
}
