#ifndef USUARIO
#define USUARIO

#include<iostream>
#include <string.h>
#include <set>
#include "../include/DTFecha.h"
#include "../include/Direccion.h"
using namespace std;

class usuario {
private:
    string nickname;
    string contrasenia;
    DTFecha fechaNac;

public:
    void setNickname(string);

    string getNickname();

    void setContrasenia(string);

    string getContrasenia();

    void setFechaNac(DTFecha);

    DTFecha getFechaNac();

    void display();

    virtual string toString()=0;
};

#endif