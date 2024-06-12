#include <iostream>
#include <string>
#include "../include/DTFecha.h"
#include "../include/cliente.h"

cliente::cliente(){}

cliente::cliente(string nick, string pass, DTFecha fecha, Direccion direc, string ciud,list<Notificacion> noti){
    this->setNickname(nick);
    this->setContrasenia(pass);
    this->setFechaNac(fecha);
    this->dir = direc;
    this->ciudad = ciud;
    this->notifs = noti;
}

void cliente::setCiudad(string c){
    this->ciudad = c;
}

string cliente::getCiudad(){
    return this->ciudad;
}

void cliente::setDir(Direccion dir){
    this->dir = dir;
}

Direccion cliente::getDir(){
    return this->dir;
}

void cliente::setNotifs(list<Notificacion> set){
    this->notifs = set;
}

list<Notificacion> cliente::getNotifs(){
    return this->notifs;
}

void cliente::display(){
    usuario::display();
    cout << "Ciudad: " << this->ciudad << endl;
}

string cliente::toString(){
    return "";
}