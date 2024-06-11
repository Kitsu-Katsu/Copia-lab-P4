#ifndef CLIENTE
#define CLIENTE

#include<iostream>
#include <string.h>
#include <list>
#include "../include/DTFecha.h"
#include "../include/usuario.h"
#include "../include/Notificacion.h"
using namespace std;

class cliente : public usuario{
private:
    Direccion dir;
    string ciudad;
    list<Notificacion> notifs;

public:
    cliente();

    cliente(string, string, DTFecha, Direccion,string,list<Notificacion>);

    void setCiudad(string);

    string getCiudad();

    void setDir(Direccion);

    Direccion getDir();

    void setNotifs(list<Notificacion>);

    list<Notificacion> getNotifs();

    void display();

    string toString();
};

#endif