#ifndef NOTIFICACION
#define NOTIFICACION
#include <string>
#include <set>
#include <iostream>
#include "../include/DTFecha.h"
using namespace std;

class Notificacion {
    private:
        string nickVendedor;
        string nombrePromo;
        DTFecha fechaRecibida;
        set<int> ids;
    public:
        Notificacion();

        Notificacion(string, string, DTFecha, set<int>);

        string getNickVendedor();

        string getNombrePromo();

        DTFecha getFechaRecibida();

        set<int> getIds();

        bool operator<(Notificacion &);
};

#endif