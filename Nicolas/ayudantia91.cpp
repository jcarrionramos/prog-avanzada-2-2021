#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<string>clientes;
    cout<<"Ingrese cantidad de clientes a atender"<<endl;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cout<<"Ingrese el nombre del cliente "<<i+1<<endl;
        string nombre;
        cin>>nombre;
        clientes.push(nombre);
    }
    while(!clientes.empty()){
        cout<<"Cuantos clientes quieres hacer pasar"<<endl;
        int cant;
        cin>>cant;
        for (int i = 0; i < cant; ++i) {
            if (clientes.empty()){
                cout<<"Ya no hay mas clientes por atender"<<endl;
                break;
            }else{
                cout<<"Se va a hacer pasar al cliente "<<clientes.front()<<endl;
                clientes.pop();
            }
        }
    }

    return 0;
}