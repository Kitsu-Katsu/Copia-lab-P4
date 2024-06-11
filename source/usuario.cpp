#include <iostream>
#include <string>
#include "../include/DTFecha.h"
#include "../include/usuario.h"


void usuario::setNickname(string n){
    this->nickname = n;
}

string usuario::getNickname(){
    return this->nickname;
}

void usuario::setContrasenia(string n){
    this->contrasenia = n;
}

string usuario::getContrasenia(){
    return this->contrasenia;
}

void usuario::setFechaNac(DTFecha fecha){
    this->fechaNac = fecha;
}

DTFecha usuario::getFechaNac(){
    return this->fechaNac;
}

void usuario::display(){
    cout << "Nickname: " << this->nickname << ", Contrasenia: " << this->contrasenia << endl;
}