#include <iostream>
using namespace std;

int main()
{
	int temp,c;
	cout<<"\nWhat is the temperature in Fahrenheit? ";
	cin>>temp;
	c=5*(temp-32)/9;
	cout<<"\nA temperature of "<<temp;
	cout<<" degrees Fahrenheit is "<<c;
	cout<<" in Celsius"<<endl;
	if (c < 100){
		cout<<"\nWater does not boil at this temperature (under typical conditions)."<<endl;
	} else {
		cout<<"\nWater boils at this temperature (under typical conditions)."<<endl;
	}
	return 0;
}
