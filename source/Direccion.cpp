#include "../include/Direccion.h"

Direccion::Direccion(){}

Direccion::Direccion(string c, int p){
    this->calle = c;
    this->puerta = p;
}

string Direccion::getCalle(){
    return this->calle;
}

int Direccion::getPuerta(){
    return this->puerta;
}

bool Direccion::operator <(Direccion & dir2){
    bool res = true;
    if (this->puerta > dir2.puerta){
        res = false;
    }
    return res;
}