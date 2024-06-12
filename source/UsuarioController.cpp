#include <iostream>
#include <map>
#include <list>
#include "../include/UsuarioController.h"
using namespace std;

UsuarioController * UsuarioController::instance = nullptr;
UsuarioController * UsuarioController::getInstance(){
    if(instance == nullptr){
        instance = new UsuarioController;
    }
    return instance;
}

void UsuarioController::altaUsuario(string nick,string pass,DTFecha fecha){
    //Guardar los datos recibidos en memoria
    this->nicknameUsuario = nick;
    this->contrasenia = pass;
    this->fechaNac = fecha;
}

bool UsuarioController::datosCliente(Direccion dir, string ciud){
    //Tomar datos de memoria
    string nick = this->nicknameUsuario;
    string pass = this->contrasenia;
    DTFecha fecha = this->fechaNac;
    list<Notificacion>noti;
    //Chequear que el nick no esté previamente registrado en ColUsuarios
    if (colUsuarios.find(nick) != colUsuarios.end()){
        cliente* client = new cliente(nick,pass,fecha,dir,ciud,noti);
        //Guardarlo en ColClientes y ColUsuarios
        colClientes.insert({nick, client});
        colUsuarios.insert({nick, client});
        return true;
    }else{
        return false;
    }
}

bool UsuarioController::datosVendedor(int rut){
    //Tomar datos de memoria
    string nick = this->nicknameUsuario;
    string pass = this->contrasenia;
    DTFecha fecha = this->fechaNac;
    //Chequear que el nick no esté previamente registrado en ColUsuarios
    if (colUsuarios.find(nick) != colUsuarios.end()){
        vendedor* vend = new vendedor(nick,pass,fecha,rut);
        //Guardarlo en ColVendedores y ColUsuarios
        colVendedores.insert({nick, vend});
        colUsuarios.insert({nick, vend});
        return true;
    }else{
        return false;
    }
}

void UsuarioController::agregarProductoVend(string nick,producto* prod){
    if(colVendedores.find(nick) != colVendedores.end()){
        vendedor* vend = colVendedores[nick];
        vend->agregarProducto(prod);
        prod->setVendedor(vend);
    }
}

list<string> UsuarioController::nicksVend(){
    list<string> ret;
    for(auto it = colVendedores.begin(); it != colVendedores.end(); it++){
        ret.push_back(it->second->getNickname());
    }
    return ret;
}

list<dataUsuario> UsuarioController::infoUsuarios(){
    list<dataUsuario> res;
    for(auto it = colClientes.begin(); it != colClientes.end(); it++){
        dataCliente dc = dataCliente(it->second->getNickname(),it->second->getFechaNac(),it->second->getDir(),it->second->getCiudad());
        res.push_back(dc);
    }
    for(auto it = colVendedores.begin(); it != colVendedores.end(); it++){
        dataVendedor dv = dataVendedor(it->second->getNickname(),it->second->getFechaNac(),it->second->getRUT());
        res.push_back(dv);
    }
    return res;
}

set<string> UsuarioController::obtenerInfo(){
    set<string> retorno;
    for(auto it = colUsuarios.begin(); it != colUsuarios.end(); it++){
        string nom = it->second->getNickname();
        retorno.insert(nom);
    }
    return retorno;
}

DTUserVendedor UsuarioController::selecUserV(string nickname){
    auto vend = colVendedores.find(nickname);
    string n = vend->second->getNickname();
    string c = vend->second->getContrasenia();
    DTFecha f = vend->second->getFechaNac();
    set<string> prd;
    set<producto *> productos = vend->second->getProductos();
    set<producto *> ::iterator it;
    for(it = productos.begin(); it!=productos.end();it++){
        string nomP = (*it)->getNombre();
        prd.insert(nomP);
    }
    //obtener todos los productos del vendedor y sus promo vigentes
    set<string> prm;
    DTUserVendedor retorno = DTUserVendedor(n, c, f, prd, prm);
    return retorno;
}
/*
DTUserCliente UsuarioController::selecUserC(string nickname){
    auto it = colClientes.find(nickname);
    string n = it->second->getNickname();
    string c = it->second->getContrasenia();
    DTFecha f = it->second->getFechaNac();
    //obtener todas las compras realizadas por el cliente y la info de los productos de las compras
    DTUserCliente retorno = DTUserCliente();
    return retorno;
}
*/
UsuarioController:: ~UsuarioController(){}