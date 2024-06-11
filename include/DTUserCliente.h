#ifndef DTUSERCLIENTE
#define DTUSERCLIENTE
#include <string>
#include <set>
#include <iostream>
#include "../include/DTFecha.h"
using namespace std;

class DTUserCliente{
    private:
        string nickname;
        string contrasenia;
        DTFecha fechaN;
        set<string> compras;
        set<string> infoProds;
    public:
        DTUserCliente();
        string getNickname();
        string getContrasenia();
        DTFecha getFechaN();
        set<string> getCompras();
        set<string> getInfoProds();
        //DTUserCliente(string n, string c, DTFecha f, set<string> com, set<string> inf);
};

#endif