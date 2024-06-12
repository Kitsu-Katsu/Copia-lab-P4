#ifndef PROMOCION
#define PROMOCION

#include<iostream>
#include <string.h>
#include <set>
#include "../include/DTFecha.h"
using namespace std;

class promocion {
private:
    float porcentaje;
    DTFecha fechaVto;
    string descripcion;
    string nombre;

public:
    promocion();
    void setPorcentaje(float);

    float getPorcentaje();

    void setFechaVto(int, int, int);

    DTFecha getFechaVto();

    void setDescripcion(string);

    string getDescripcion();

    void setNombre(string);

    string getNombre();
};

#endif