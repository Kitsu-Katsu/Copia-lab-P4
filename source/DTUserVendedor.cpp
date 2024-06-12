#include "../include/DTUserVendedor.h"

DTUserVendedor::DTUserVendedor(){

}

string DTUserVendedor::getNickname(){
    return this->nickname;
}

string DTUserVendedor::getContrasenia(){
    return this->contrasenia;
}

DTFecha DTUserVendedor::getFechaN(){
    return this->fechaN;
}

set<string> DTUserVendedor::getProds(){
    return this->prods;
}

set<string> DTUserVendedor::getPromos(){
    return this->promos;
}

DTUserVendedor::DTUserVendedor(string n, string c, DTFecha f, set<string> prod, set<string> prom){
    (*this).nickname = n;
    (*this).contrasenia = c;
    (*this).fechaN = f;
    (*this).prods = prod;
    (*this).promos = prom;
}
