#include "../include/Notificacion.h"

Notificacion::Notificacion(){}

Notificacion::Notificacion(string nick, string promo, DTFecha fecha, set<int> set){
    this->nickVendedor = nick;
    this->nombrePromo = promo;
    this->fechaRecibida = fecha;
    this->ids = set;
}

string Notificacion::getNickVendedor(){
    return this->nickVendedor;
}

string Notificacion::getNombrePromo(){
    return this->nombrePromo;
}

DTFecha Notificacion::getFechaRecibida(){
    return this->fechaRecibida;
}

set<int> Notificacion::getIds(){
    return this->ids;
}

bool Notificacion::operator<(Notificacion & noti2){
    bool ret = false;
    if (this->fechaRecibida < noti2.fechaRecibida){
        ret = true;
    }
    return ret;
}