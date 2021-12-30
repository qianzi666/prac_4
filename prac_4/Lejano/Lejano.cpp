#include <math.h>
#include "Punto.h"
#include <iostream>
using namespace std;

void muestraPunto( const Punto & p ) {
std::cout << "(" << p.getX() << ", " << p.getY() << ")\n";
}

Punto lejano(Punto puno, Punto pdos){
    Punto origen;
    double dista=puno.distancia(origen);
    double distb=pdos.distancia(origen);
    if(dista>distb){
        return puno;
    }else{
        return pdos;
        }
}
    
int main(){
    Punto puno (2,3);
    Punto pdos (-2,-5);
    Punto resultado = lejano(puno, pdos);
    muestraPunto(resultado);
}