#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main ()
{
  string read;
  string preciomedio;
  string cmpg;
  string hwmpg;
  float ciudad;
  float ciudad1 = 0.0;
  float hw;
  float hwav = 0.0;
  float precio;
  float precio1 = 0.0;

  ifstream file("93cars.dat.txt");
  if (file.is_open()){
    for (int i=0; i < 93; i++){
        getline(file, read);
        preciomedio = read.substr(42,4);
        istringstream valor1(preciomedio);
        valor1 >> precio;
        cmpg = read.substr(52,2);
        istringstream valor2(cmpg);
        valor2 >> ciudad;
        hwmpg = read.substr(55,2);
        istringstream valor3(hwmpg);
        valor3 >> hw;
        hwav = hwav + hw;
        precio1 = precio1 + precio;
        ciudad1 = ciudad1 + ciudad;
        getline(file, read);
    }
    file.close();
  } else {
    cout << "Error 404: File not found" << endl;
  } 
  precio1 = precio1/93;
  ciudad1 = ciudad1/93;
  hwav = hwav/93;
  cout << "Rango de precio: " << precio1 << endl;
  cout << "MPG en ciudad: " << ciudad1 << endl;
  cout << "MPG en carretera: " << hwav << endl;
  return 0;
}
