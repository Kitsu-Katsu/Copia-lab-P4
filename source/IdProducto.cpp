#include "../include/IdProducto.h"

IdProducto::IdProducto(){

}

int IdProducto::getCodigo(){
    return this->codigo;
}

string IdProducto::getNombre(){
    return this->nombre;
}

void IdProducto::setCodigo(int cod){
    this->codigo = cod;
}

void IdProducto::setNombre(string nom){
    this->nombre = nom;
}

IdProducto::IdProducto(int codigo, string nombre){
    (*this).codigo = codigo;
    (*this).nombre = nombre;
}

bool IdProducto::operator<(IdProducto & idp){
    bool res = this->codigo < idp.codigo;
    return res;
}