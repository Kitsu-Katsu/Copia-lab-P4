#ifndef DTUSERVEDEDOR
#define DTUSERVEDEDOR
#include <string>
#include <set>
#include <iostream>
#include "../include/DTFecha.h"
using namespace std;

class DTUserVendedor{
    private:
        string nickname;
        string contrasenia;
        DTFecha fechaN;
        set<string> prods;
        set<string> promos;
    public:
        DTUserVendedor();
        string getNickname();
        string getContrasenia();
        DTFecha getFechaN();
        set<string> getProds();
        set<string> getPromos();
        DTUserVendedor(string n, string c, DTFecha f, set<string> prod, set<string> prom);
};

#endif