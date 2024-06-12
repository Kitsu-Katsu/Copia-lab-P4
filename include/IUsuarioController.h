#ifndef IUSUARIOCONTROLLER
#define IUSUARIOCONTROLLER

#include "DTFecha.h"
#include "Direccion.h"
#include "dataUsuario.h"
#include "DTUserVendedor.h"
#include <iostream>
#include <string.h>
#include <set>
#include <list>
#include <map>
using namespace std;

class IUsuarioController {
    public:
        virtual void altaUsuario(string,string,DTFecha)= 0;
        virtual bool datosCliente(Direccion,string)= 0;
        virtual bool datosVendedor(int)= 0;
        virtual list<dataUsuario> infoUsuarios()= 0;
        virtual set<string> obtenerInfo() = 0;
        //virtual DTUserCliente selecUserC(string nickname);
        virtual DTUserVendedor selecUserV(string nickname);
        virtual ~IUsuarioController(){};
};

#endif