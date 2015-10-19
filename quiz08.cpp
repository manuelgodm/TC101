#include <iostream>
using namespace std;
 
 int sumsquares_list(int x[], int size)
 {
 int i,s=0;
 for(i=0;i<size;i++)
 {
 s=s+(x[i]*x[i]);
 }
 return s;
 }
 
 
 int main()
 {
 int num[5],suma;
 cout << "Ingresa el primer numero: ";
 cin >> num[0];
 cout << "Ingresa el segundo numero: ";
 cin >> num[1];
 cout << "Ingresa el tercer numero: ";
 cin >> num[2];
 cout << "Ingresa el cuarto numero: ";
 cin >> num[3];
 cout << "Ingresa el quinto numero: ";
 cin >> num[4];
 
 suma=sumsquares_list(num,5);
 
 cout << "La suma de los cuadrados es: " << suma << endl; 
 return 0;
 }
