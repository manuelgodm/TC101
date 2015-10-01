#include "iostream"
using namespace std;

int sum (int x,int y) 
{
return x+y;
}

int res (int d, int f)
{
int rest=d-f;
return rest;
}

int mul (int t, int w)
{
int mult = t*w;
return mult;
}

int div (int g, int z)
{
int divi = g/z;
return divi;
}

int rem (int r, int o)
{
int rema=r%o;
return rema;
}
 
 
int main ()
{
int a,b,c,d,e,f,g;
cout << "Ingrese un numero: ";
cin >> a;
cout << "Ingrese otro numero: ";
cin >> b;
c= sum (a,b);
d=res (a,b);
e=mul (a,b);
f=div (a,b);
g=rem (a,b);
cout << "La suma de los numeros es: " << c << endl;
cout << "La resta de los números es; " << d << endl;
cout << "La multiplicacion de los números es; " << e << endl;
cout << "La division de los números es; " << f << endl;
cout << "El sobrante de la division es; " << g << endl;
return 0;
}
