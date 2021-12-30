#include <iostream>
#include "Punto.h"
using namespace std;

Punto leePunto()
{
  double nx;
  double ny;
  cout << "dime coordenada X ";
  cin >> nx;
  cout << "dime coordenada Y ";
  cin >> ny;

  Punto nuevo( nx, ny );
  return nuevo;
}

int main()
{
    Punto origen;
    Punto p1= leePunto();
    int qC=origen.queCuadrante(p1);

    cout<<"Esta en el cuadrante" <<qC << endl;


}


