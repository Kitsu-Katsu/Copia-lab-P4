#include <iostream>
#include "../include/Fabrica.h"

Fabrica * Fabrica::instance = nullptr;
Fabrica::Fabrica(){}
Fabrica * Fabrica::getInstance(){
    if(instance == nullptr){
        instance = new Fabrica();
    }
    return instance;
}

ICompraController * Fabrica::getICompraController(){
    return CompraController::getInstance();
}

IUsuarioController * Fabrica::getIUsuarioController(){
    return UsuarioController::getInstance();
}