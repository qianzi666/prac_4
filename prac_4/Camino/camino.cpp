#include "Punto.h"
#include <iostream>
using namespace std;

int camino(Punto *p, int num){
    Punto inicio = p[0];
    int suma = 0;
    for(int i=0; i<num; i++){
        suma = suma + p[i].distancia(p[i+1]);
        }
    return suma;
}

int main() {
  Punto p1(3,6);
  Punto p2(1,2);
  Punto p3(-3,1);
  Punto Lista[3] = {p1,p2,p3};
  double distancia = camino(&Lista[0], 3);

  cout << "La distancia total es "<<distancia;
}
    