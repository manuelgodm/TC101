#include "iostream"
using namespace std;

long int factorial(int a)
{
int i;
long int fac=1;
for (i=2;i<=a;i++)
fac=fac*i;
return fac;
}

int main()
{
int y;
char tries;

do{
cout << "Escribe un numero: ";
cin >> y;
cout << "El fatorial es: " << factorial(y) << endl;
cout << "Quieres intentarlo otra ves?, escribe y para si o n para no: ";
cin >> tries;
} while (tries == 'y');
return 0;
}
