#include "include/cliente.h"
#include "include/comentario.h"
#include "include/compra.h"
#include "include/CompraController.h"
#include "include/dataProducto.h"
#include "include/dataProducto.h"
#include "include/dataUsuario.h"
#include "include/Direccion.h"
#include "include/DTFecha.h"
#include "include/DTUserVendedor.h"
#include "include/Fabrica.h"
#include "include/ICompraController.h"
#include "include/IdProducto.h"
#include "include/IUsuarioController.h"
#include "include/Notificacion.h"
#include "include/producto.h"
#include "include/promocion.h"
#include "include/usuario.h"
#include "include/UsuarioController.h"
#include "include/vendedor.h"
#include <string>
#include <list>

#include <iostream>
using namespace std;

int main(){
    Fabrica * fab = Fabrica::getInstance();
    IUsuarioController * iuc = fab->getIUsuarioController();
    ICompraController * icc = fab->getICompraController();
    int input = -1;
    while(input != 0){
        cout<< "Indique la operacion que quiere realizar \n";
        cout<< "0) Salir 1) Alta Usuario \n 2)Listado Usuarios \n 3) Alta Producto \n 4) Consultar Producto \n 5) Crear Promocion \n 6)Consultar Promocion \n 7) Realizar Compra \n 8) Dejar Comentario \n 9) Eliminar Comentario \n 10) Enviar Producto \n 11) Expediente Usuario \n 12) Suscribirse a Notificaciones \n 13) Consulta de Notificacion \n 14) Eliminar Suscripcion \n";
        cin>>input;
        switch (input){
            case 0:
            break;
            {case 1:
                string nick;
                int d;
                int m;
                int a;
                string contrasenia;
                char us;
                cout<<"Ingrese lo datos del usuario" ;
                cout<<"Nickname:";
                cin>>nick;
                cout<<"Fecha de nacimiento d m a:";
                cin>>d>>m>>a;
                cout<<"Contraseña:";
                cin>>contrasenia;
                DTFecha fechaNac = DTFecha(d,m,a);
                iuc->altaUsuario(nick,contrasenia,fechaNac);
                cout<<"El usuario es un cliente (c) o vendedor (v)";
                cin>>us;
                if (us == 'c' || us == 'C' ){
                    string ciudad;
                    string calle;
                    int num;
                    cout<<"Ingrese ciudad en donde vive:";
                    cin>>ciudad;
                    cout<<"Calle y número de puerta:";
                    cin>>calle>>num;
                    Direccion dir = Direccion(calle,num);
                    iuc->datosCliente(dir,ciudad);
                }else if(us == 'v' || us == 'V'){
                    int rut;
                    cout<<"Ingrese el rut del vendedor";
                    cin>>rut;
                    iuc->datosVendedor(rut);
                }
            }
            break;
            {case 2:
                list<dataUsuario> listado;
                listado = iuc->infoUsuarios();
                for(list<dataUsuario>::iterator it = listado.begin(); it != listado.end(); it++){
                    cout<<it->toString()<<"\n";
                }
            }   
            break;
            {case 3:
                list<string> nicks;
                nicks = icc->listarVendedor();
                for(auto i : nicks){
                    cout<<i<<"\n";
                }
                cout<<"Seleccione Vendedor de entre los anteriores mostrados\n";
                string input;
                cin>>input;
                icc->seleccionarVendedor(input);
                cout<<"Ingrese nombre del producto a crear:\n";
                string nombreP;
                cin>>nombreP;
                cout<<"Ingrese descripcion del producto a crear:\n";
                string desc;
                cin>>desc;
                cout<<"Ingrese precio del producto a crear:\n";
                float precio;
                cin>>precio;
                int cat;
                do{
                    cout<<"Ingrese Categoria(1-Ropa,2-Electrodomestico,3-Otro) del producto a crear:\n";
                    cin>>cat;
                } while (cat<1||cat>3);
                switch (cat){
                case 1:
                    icc->ingresoProducto(nombreP,desc,precio,Ropa);
                    break;
                case 2:
                    icc->ingresoProducto(nombreP,desc,precio,Electrodomestico);
                    break;
                case 3:
                    icc->ingresoProducto(nombreP,desc,precio,Otro);
                    break;
                }

            }
            break;
            case 4:
            break;
            case 5:
            break;
            case 6:
            break;
            case 7:
            break;
            case 8:
            break;
            case 9:
            break;
            case 10:
            break;
            case 11:
            break;
            case 12:
            break;
            case 13:
            break;
            case 14:
            break;
            default:
                cout<<"Ingrese un numero valido";
        }
    }
    return 0;
}
