#ifndef USUARIOCONTROLLER
#define USUARIOCONTROLLER

#include <iostream>
#include <string.h>
#include <map>
#include <set>
#include <list>
#include "../include/usuario.h"
#include "../include/cliente.h"
#include "../include/vendedor.h"
#include "../include/dataUsuario.h"
#include "../include/IUsuarioController.h"
#include "../include/DTUserVendedor.h"
#include "../include/DTUserCliente.h"

using namespace std;

class UsuarioController: public IUsuarioController {
    private:
        static UsuarioController* instance;
        UsuarioController()=default;
        map<string,usuario*> colUsuarios;
        map<string,cliente*> colClientes;
        map<string,vendedor*> colVendedores;
        string nicknameUsuario;
        string contrasenia;
        DTFecha fechaNac;

    public:
        static UsuarioController * getInstance();
        // CASO DE USO ALTA USUARIO
        virtual void altaUsuario(string,string,DTFecha);
        virtual bool datosCliente(Direccion,string);
        virtual bool datosVendedor(int);
        //Retorna un set con los nickname de todos los vendedores del sistema
        virtual list<string> nicksVend();
        //Relaciona un producto con un vendedor con el nickname dado
        virtual void agregarProductoVend(string,producto*);
        virtual list<dataUsuario> infoUsuarios();
        // CASO DE USO EXPEDIENTE DE USUARIO
        virtual set<string> obtenerInfo();
        //virtual DTUserCliente selecUserC(string nickname);
        virtual DTUserVendedor selecUserV(string nickname);
        virtual ~UsuarioController();
};


#endif