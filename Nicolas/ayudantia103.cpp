#include <iostream>
#include <vector>
#include <queue>
#include <cstdlib>
#include <ctime>
using namespace std;

class Producto{
private:
    string nombre,codigo;
    int precio;
public:
    Producto(string nombre,string codigo, int precio){
        this->precio=precio;
        this->codigo=codigo;
        this->nombre=nombre;
    }
    int getPrecio(){
        return precio;
    }
};

int main(){
    srand(time(NULL));
    queue<vector<Producto*>>fila;
    float ventadia=0;
    int opcion=0;
    while (opcion!=4){
        cout<<"Ingrese 1 si quiere atender carrito"<<endl
        <<"Ingrese 2 si quiere agregar carro a fila"<<endl
        <<"Ingrese 3 si quiere intentar robar"<<endl
        <<"Ingrese 4 si quiere terminar el sistema"<<endl;
        cin>>opcion;
        if (opcion==1){
            if (fila.empty()){
                cout<<"El mejor supermercado de Chile"<<endl<<endl;
            }else{
                float carrito=0;
                for (int i = 0; i < fila.front().size(); ++i) {
                    carrito+=(float)fila.front().at(i)->getPrecio();
                }
                fila.pop();
                ventadia+=carrito;
                cout<<"Venta exitosa!"<<endl<<endl;
            }
        }else if(opcion==2){
            int op=0;
            vector<Producto*>aux;
            while (op!=2){
                cout<<"Ingresa 1 para ingresar nuevo producto al carro"<<endl
                <<"Ingresa 2 para cerrar carro"<<endl;
                cin>>op;
                if (op==1){
                    string nombre,barra;
                    int precio;
                    cout<<"Ingresa nombre de producto"<<endl;
                    cin>>nombre;
                    cout<<"Ingresa codigo de producto"<<endl;
                    cin>>barra;
                    cout<<"Ingresa precio del producto"<<endl;
                    cin>>precio;
                    Producto *nuevo=new Producto(nombre,barra,precio);
                    aux.push_back(nuevo);
                    cout<<"Produto agregado correctamente!"<<endl;
                }else if(op==2){
                    cout<<endl<<endl;
                }else{
                    cout<<"Opcion invalida"<<endl<<endl;
                }
            }
            fila.push(aux);
        }else if(opcion==3){
            fila.front().pop_back();
            int suerte=rand()%2-0;
            if (suerte==0){
                cout<<"Por los pelos"<<endl<<endl;
            }else{
                cout<<"Persona detenida"<<endl<<endl;
                fila.pop();
            }
        }else if(opcion==4){

        }else{
            cout<<"Opcion invalida"<<endl;
        }
    }
    cout<<"La venta total del día fue de "<<ventadia<<endl;

    return 0;
}