#include "../include/DTFecha.h"

DTFecha::DTFecha(){
    
}

int DTFecha::getDia(){
    return this->Dia;
}

int DTFecha::getMes(){
    return this->Mes;
}

int DTFecha::getAnio(){
    return this->Anio;
}

DTFecha::DTFecha(int d, int m, int a){
    (*this).Dia = d;
    (*this).Mes = m;
    (*this).Anio = a;
}

string DTFecha::FechaAString(){
    string dia = to_string(this->Dia);
    string mes = to_string(this->Mes);
    string anio = to_string(this->Anio);
    return dia + "/" + mes + "/" + anio;
}

bool DTFecha::operator<(DTFecha & f2){
    bool retorno = true;
    if(this->Anio > f2.Anio) retorno = false;
    else if(this->Mes > f2.Mes) retorno = false;
    else if(this->Dia >= f2.Dia) retorno = false;
    return retorno;
}
bool DTFecha::operator>(DTFecha & f2){
    bool retorno = true;
    if(this->Anio < f2.Anio) retorno = false;
    else if(this->Mes < f2.Mes) retorno = false;
    else if(this->Dia <= f2.Dia) retorno = false;
    return retorno;
}
bool DTFecha::operator<=(DTFecha & f2){
    bool retorno = true;
    if(this->Anio > f2.Anio) retorno = false;
    else if(this->Mes > f2.Mes) retorno = false;
    else if(this->Dia > f2.Dia) retorno = false;
    return retorno;
}
bool DTFecha::operator>=(DTFecha & f2){
    bool retorno = true;
    if(this->Anio < f2.Anio) retorno = false;
    else if(this->Mes < f2.Mes) retorno = false;
    else if(this->Dia < f2.Dia) retorno = false;
    return retorno;
}