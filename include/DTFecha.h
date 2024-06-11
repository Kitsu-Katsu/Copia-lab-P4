#ifndef DTFECHA
#define DTFECHA
#include <string>
#include <iostream>
using namespace std;

class DTFecha {
    private:
        int Dia;
        int Mes;
        int Anio;
    public:
        DTFecha();
        DTFecha(int,int,int);
        int getDia();
        int getMes();
        int getAnio();
        //f1 anterior a f2
        bool operator <(DTFecha &);
        //f1 posterior a f2
        bool operator >(DTFecha &);
        //f1 anterior o igual a f2
        bool operator <=(DTFecha &);
        //f1 posterior o igual a f2
        bool operator >=(DTFecha &);
        std::string FechaAString();
};

#endif