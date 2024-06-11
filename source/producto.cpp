#include <iostream>
#include <string>
#include "../include/producto.h"

producto::producto(){}

producto::producto(string nombre,string descripcion,int codigo,float precio,Categoria cat){
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->codigo = codigo;
    this->precio = precio;
    this->categoria = cat;
    this->vend=NULL;
}

void producto::setCodigo(int c){
    this->codigo = c;
}

int producto::getCodigo(){
    return this->codigo;
}

void producto::setNombre(string n){
    this->nombre = n;
}

string producto::getNombre(){
    return this->nombre;
}

void producto::setDescripcion(string d){
    this->descripcion = d;
}

string producto::getDescripcion(){
    return this->descripcion;
}

void producto::setStock(int s){
    this->stock = s;
}

int producto::getStock(){
    return this->stock;
}

void producto::setPrecio(float p){
    this->precio = p;
}

float producto::getPrecio(){
    return this->precio;
}

void producto::setCategoria(Categoria c){
    this->categoria = c;
}

Categoria producto::getCategoria(){
    return this->categoria;
}

void producto::setVendedor(vendedor* v){
    this->vend = v;
}

vendedor* producto::getVendedor(){
    return this->vend;
}