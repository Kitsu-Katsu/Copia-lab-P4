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
        static UsuarioController * instance;
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
        void altaUsuario(string,string,DTFecha);
        bool datosCliente(Direccion,string);
        bool datosVendedor(int);
        //Retorna un set con los nickname de todos los vendedores del sistema
        list<string> nicksVend();
        //Relaciona un producto con un vendedor con el nickname dado
        void agregarProductoVend(string,producto*);
        list<dataUsuario> infoUsuarios();
        // CASO DE USO EXPEDIENTE DE USUARIO
        set<string> obtenerInfo();
        DTUserCliente selecUserC(string nickname);
        DTUserVendedor selecUserV(string nickname);
};


#endif