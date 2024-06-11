#ifndef COMPRA
#define COMPRA

#include<iostream>
#include <string.h>
#include <set>
#include "../include/DTFecha.h"
using namespace std;

class compra {
private:
    float montoFinal;
    DTFecha fecha;

public:
    compra();
    void setMontoFinal(float);

    float getMontoFinal();

    void setFecha(int, int, int);

    DTFecha getFecha();
};

#endif