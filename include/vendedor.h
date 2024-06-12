#ifndef VENDEDOR
#define VENDEDOR

#include<iostream>
#include <string.h>
#include <set>
#include "../include/usuario.h"
#include "../include/producto.h"
using namespace std;

class vendedor : public usuario{
private:
    int RUT;
    set<producto *> productos;
public:
    vendedor();

    vendedor(string, string, DTFecha, int);

    void setRUT(int);

    int getRUT();

    void display();

    void agregarProducto(producto*);
    void removerProducto(producto*);
    string toString();
    set<producto *> getProductos();
};

#endif