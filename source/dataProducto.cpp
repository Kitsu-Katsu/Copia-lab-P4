#include "../include/dataProducto.h"
#include "../include/producto.h"

dataProducto::dataProducto(){
    
}

float dataProducto::getPrecio(){
    return this->precio;
}

int dataProducto::getStock(){
    return this->stock;
}

string dataProducto::getDescripcion(){
    return this->descripcion;
}

Categoria dataProducto::getCategoria(){
    return this->categoria;
}

string dataProducto::getVendedor(){
    return this->vendedor;
}

dataProducto::dataProducto(float precio, int stock, string descripcion, Categoria categoria, string vendedor){
    (*this).precio = precio;
    (*this).stock = stock;
    (*this).descripcion = descripcion;
    (*this).categoria = categoria;
    (*this).vendedor = vendedor;
}

bool dataProducto::operator<(dataProducto & data){
    bool res = this->precio < data.precio;
    return res;
}
