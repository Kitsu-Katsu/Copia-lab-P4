#ifndef DATAUSUARIO
#define DATAUSUARIO

#include <iostream>
#include<string>
#include "../include/DTFecha.h"
#include "../include/Direccion.h"
using namespace std;

class dataUsuario {
    private:
        string nickname;
        DTFecha fechaNac;
    public:
        dataUsuario(string,DTFecha);
        string getnickname();
        DTFecha getfechaNac();
        virtual string toString();
        bool operator<(dataUsuario &);

};

class dataVendedor: public dataUsuario {
    private:
        int rut;
    public:
        dataVendedor() = default;
        dataVendedor(string,DTFecha,int);
        int getrut();
        //virtual string toString();
};

class dataCliente: public dataUsuario {
    private: 
        Direccion direccion;
        string ciudad;
    public:
        dataCliente();
        dataCliente(string,DTFecha,Direccion,string);
        Direccion getdireccion();
        string getciudad();
        //virtual string toString();
};

#endif