#include <iostream>
#include <cmath>

using namespace std;

long superpower(long x, long y)
{
return pow(x,y);
}
int main()
{
int a,b;
cout << "Ingresa un numero: ";
cin >> a;
cout << "Escribe su potencia: ";
cin >> b;
cout << "El resultado es: "<< superpower(a,b) << endl;
return 0;
}
