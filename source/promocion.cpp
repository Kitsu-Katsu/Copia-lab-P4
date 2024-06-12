#include <iostream>
#include <string>
#include "../include/promocion.h"

promocion::promocion(){}

void promocion::setPorcentaje(float p){
    this->porcentaje = p;
}

float promocion::getPorcentaje(){
    return this->porcentaje;
}

void promocion::setFechaVto(int d, int m, int a){
    this->fechaVto = DTFecha(d,m,a);
}

DTFecha promocion::getFechaVto(){
    return this->fechaVto;
}

void promocion::setDescripcion(string d){
    this->descripcion = d;
}

string promocion::getDescripcion(){
    return this->descripcion;
}

void promocion::setNombre(string n){
    this->nombre = n;
}

string promocion::getNombre(){
    return this->nombre;
}