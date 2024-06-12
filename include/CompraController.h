#ifndef COMPRACONTROLLER
#define COMPRACONTROLLER
#include <iostream>
#include <string.h>
#include <map>
#include <set>
#include "../include/producto.h"
#include "../include/compra.h"
#include "../include/IdProducto.h"
#include "../include/dataProducto.h"
#include "../include/ICompraController.h"

using namespace std;


class CompraController : public ICompraController {
    private:
        static CompraController * instance;
        CompraController() = default;
        map<int,producto*> colProductos;
        set<compra*> colCompra;
        string nickVendedor;
    public:
        static CompraController * getInstance();
        //Devuelve un listado de vendedores para seleccionar producto
        virtual list<string> listarVendedor();
        //Seleccion de vendedor para creacion de producto
        virtual void seleccionarVendedor(string);
        //Creacion de producto con los parametros recibidos y con el vendedor almacenado
        virtual void ingresoProducto(string,string,float,Categoria);
        //Listado de codigo y nombre de todos los productos
        virtual list<IdProducto> obtenerListado();
        //Se muestran los datos contenidos en dataProducto
        virtual dataProducto infoProd(int codigo);
        virtual ~CompraController();
};



#endif