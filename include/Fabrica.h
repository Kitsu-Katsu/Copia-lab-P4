#ifndef FABRICA
#define FABRICA

#include "../include/CompraController.h"
#include "../include/ICompraController.h"

#include "../include/UsuarioController.h"
#include "../include/IUsuarioController.h"


class Fabrica {
    private:
        static Fabrica * instance;
        Fabrica();
    public:
        static Fabrica * getInstance();
        ICompraController * getICompraController();
        IUsuarioController * getIUsuarioController();
};

#endif