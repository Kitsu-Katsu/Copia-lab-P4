#include "../include/CompraController.h"
#include "../include/ICompraController.h"
#include "../include/UsuarioController.h"
#include <list>

CompraController* CompraController::instance = nullptr; //Cambiar a NULL
CompraController * CompraController::getInstance(){
    if(instance == nullptr){
        instance = new CompraController();
    }
    return instance;
}

list<string> CompraController::listarVendedor(){
    UsuarioController * usrctrl = UsuarioController::getInstance();
    return usrctrl->nicksVend();
}

void CompraController::seleccionarVendedor(string nickname){
    nickVendedor = nickname;
}

//Comentario de Luis:
//Acá tenias la operación mal sobrecarga, en la firma de la función en el ICompraController tenias un int, float
//Y acá en la definición de la función tenias unicamente un float, lo que te hacia que la operación no estuviera definida
//Por lo que no se podía instanciar
void CompraController::ingresoProducto(string nombre,string descripcion,float precio,Categoria cat){
    //generacion de codigo

    //Comentario de Luis:
    //Acá tienes problemas si el size disminuye al momento de generar un código
    int codigo = colProductos.size() + 1;
    UsuarioController * usrctrl = UsuarioController::getInstance();
    producto * prod = new producto(nombre,descripcion,codigo,precio,cat);
    //agregar enlaces entre producto y vendedor
    usrctrl->agregarProductoVend(nickVendedor,prod);
    colProductos.insert({codigo,prod});
    nickVendedor = "";
}

list<IdProducto> CompraController::obtenerListado(){
    list<IdProducto> ret;
    for (auto it = colProductos.begin(); it != colProductos.end(); it++){
        IdProducto idprod = IdProducto(it->second->getCodigo(), it->second->getNombre());
        ret.push_back(idprod);
    }
    return ret;
}
dataProducto CompraController::infoProd(int codigo){
    producto * prod = colProductos.find(codigo)->second;
    dataProducto dataprod = dataProducto(prod->getPrecio(), prod->getStock(), prod->getDescripcion(), prod->getCategoria(), prod->getVendedor()->getNickname());
    return dataprod;
}

CompraController::~CompraController(){}