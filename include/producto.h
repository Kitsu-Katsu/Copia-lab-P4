#ifndef PRODUCTO
#define PRODUCTO

#include <iostream>
#include <string.h>
#include <set>
using namespace std;

enum Categoria{Ropa,Electrodomestico,Otro};
class vendedor;
class producto {
private:
    int codigo;
    string nombre;
    string descripcion;
    int stock;
    float precio;
    Categoria categoria;
    vendedor * vend;
public:
    producto();
    producto(string,string,int,float,Categoria);
    void setCodigo(int);
    int getCodigo();
    void setNombre(string);
    string getNombre();
    void setDescripcion(string);
    string getDescripcion();
    void setStock(int);
    int getStock();
    void setPrecio(float);
    float getPrecio();
    void setCategoria(Categoria);
    Categoria getCategoria();
    void setVendedor(vendedor*);
    vendedor * getVendedor();
};

#include "../include/vendedor.h"
#endif