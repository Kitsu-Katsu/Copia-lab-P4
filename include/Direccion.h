#ifndef DIRECCION
#define DIRECCION
#include <string>
#include <iostream>
using namespace std;

class Direccion {
    private:
        string calle;
        int puerta;
    public:
        Direccion();
        Direccion(string, int);
        string getCalle();
        int getPuerta();
        bool operator <(Direccion &);
};

#endif