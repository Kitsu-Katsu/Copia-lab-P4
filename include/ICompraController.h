#ifndef ICOMPRACONTROLLER
#define ICOMPRACONTROLLER

#include <iostream>
#include <string.h>
#include <map>
#include <list>
#include <set>
#include "../include/producto.h"
#include "../include/compra.h"
#include "../include/IdProducto.h"
#include "../include/dataProducto.h"
using namespace std;

class ICompraController {
    public:
        virtual void seleccionarVendedor(string) = 0;
        virtual void ingresoProducto(string,string,float,Categoria) = 0;
        virtual list<IdProducto> obtenerListado()= 0;
        virtual dataProducto infoProd(int)= 0;
        virtual list<string> listarVendedor()= 0;
        virtual ~ICompraController(){};
};

#endif
