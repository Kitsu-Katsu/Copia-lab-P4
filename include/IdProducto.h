#ifndef IDPRODUCTO
#define IDPRODUCTO
#include <string>
#include <iostream>
using namespace std;

class IdProducto {
    private:
        int codigo;
        string nombre;
    public:
        IdProducto();
        IdProducto(int, string);
        int getCodigo();
        void setCodigo(int);
        string getNombre();
        void setNombre(string);
        bool operator<(IdProducto &);
};

#endif