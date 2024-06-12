#include "../include/dataUsuario.h"

dataUsuario::dataUsuario(string nick, DTFecha fecha){
    nickname = nick;
    fechaNac = fecha;
}

string dataUsuario::toString(){
    return "";
}

string dataUsuario::getnickname(){
    return this->nickname;
}

DTFecha dataUsuario::getfechaNac(){
    return this->fechaNac;
}

bool dataUsuario::operator<(dataUsuario & data){
    bool res = this->fechaNac < data.fechaNac;
    return res;
}

dataVendedor::dataVendedor(string nick,DTFecha fecha,int RUT): dataUsuario(nick,fecha) {
    rut = RUT;
}

int dataVendedor::getrut(){
    return this->rut;
}

string dataVendedor::toString(){
    string res = "nombre: " + this->getnickname() + "Fecha de nacimiento: " + this->getfechaNac().FechaAString() + "rut: " + to_string(this->getrut());
    return res;
}

dataCliente::dataCliente(string nick,DTFecha fecha,Direccion dir,string ciud):dataUsuario(nick,fecha){
    direccion = dir;
    ciudad = ciud; 
}

Direccion dataCliente::getdireccion(){
    return this->direccion;
}

string dataCliente::getciudad(){
    return this->ciudad;
}

string dataCliente::toString(){
    string res = "nombre: " + this->getnickname() + "Fecha de nacimiento: " + this->getfechaNac().FechaAString() + "ciudad: " + this->getciudad() + "direccion: " + this->getdireccion().getCalle() + to_string(this->getdireccion().getPuerta());
    return res;
}