#include <iostream>
#include <string>
#include "../include/DTFecha.h"
#include "../include/vendedor.h"

vendedor::vendedor(){
}

vendedor::vendedor(string nick, string pass, DTFecha fecha, int rut){
    this->setNickname(nick);
    this->setContrasenia(pass);
    this->setFechaNac(fecha);
    this->RUT = rut;
}

void vendedor::setRUT(int rut){
    this->RUT = rut;
}

int vendedor::getRUT(){
    return this->RUT;
}

void vendedor::display(){
    usuario::display();
    cout << "RUT: " << this->RUT << endl;
}

void vendedor::agregarProducto(producto* prod){
    productos.insert(prod);
}

void vendedor::removerProducto(producto* prod){
    productos.erase(prod);
}

string vendedor::toString(){
    return "";
}

set<producto*> vendedor::getProductos(){
    return this->productos;
}