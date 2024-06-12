#ifndef DATAPRODUCTO
#define DATAPRODUCTO
#include <string>
#include <iostream>
#include "../include/producto.h"
using namespace std;

class dataProducto {
    private:
        float precio;
        int stock;
        string descripcion;
        Categoria categoria;
        string vendedor;
    public:
        dataProducto();
        dataProducto(float, int, string, Categoria, string);
        float getPrecio();
        int getStock();
        string getDescripcion();
        Categoria getCategoria();
        string getVendedor();
        bool operator<(dataProducto &);
};

#endif