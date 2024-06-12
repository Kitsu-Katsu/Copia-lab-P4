#ifndef COMENTARIO
#define COMENTARIO

#include<iostream>
#include <string.h>
#include <set>
#include "../include/DTFecha.h"
using namespace std;

class comentario {
private:
    string texto;
    DTFecha fecha;

public:
    comentario();
    void setTexto(string);

    string getTexto();

    void setFecha(int, int, int);

    DTFecha getFecha();
};

#endif