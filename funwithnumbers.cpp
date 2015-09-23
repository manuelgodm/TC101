#include <iostream>
using namespace std;

int main()
{
	int x,y,s,r,p,d,g;
cout<<"\nIngrese un número:";
cin>>x;
cout<<"\nIngrese otro número:";
cin>>y;
s=x+y;
r=x-y;
p=x*y;
d=x/y;
g=x%y;
cout<<"\nLa suma de los números es: "<<s;
cout<<"\nLa resta de los números es: "<<r;
cout<<"\nEl producto de los números es: "<<p;
cout<<"\nLa división de los números es: "<<d;
cout<<"\nEl residuo de la división es: "<<g<<endl;
return 0;
}
