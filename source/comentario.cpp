#include <iostream>
#include <string>
#include "../include/comentario.h"

comentario::comentario(){}

void comentario::setTexto(string t){
    this->texto = t;
}

string comentario::getTexto(){
    return this->texto;
}

void comentario::setFecha(int d, int m, int a){
    this->fecha = DTFecha(d,m,a);
}

DTFecha comentario::getFecha(){
    return this->fecha;
}