#include "../include/DTUserCliente.h"

DTUserCliente::DTUserCliente(){

}

string DTUserCliente::getNickname(){
    return this->nickname;
}

string DTUserCliente::getContrasenia(){
    return this->contrasenia;
}

DTFecha DTUserCliente::getFechaN(){
    return this->fechaN;
}
