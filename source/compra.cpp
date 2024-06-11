#include <iostream>
#include <string>
#include "../include/compra.h"

compra::compra(){}

void compra::setMontoFinal(float m){
    this->montoFinal = m;
}

float compra::getMontoFinal(){
    return this->montoFinal;
}

void compra::setFecha(int d, int m, int a){
    this->fecha = DTFecha(d,m,a);
}

DTFecha compra::getFecha(){
    return this->fecha;
}