#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<int>ventas;
    int opcion=0;
    while (opcion!=3){
        cout<<"Ingrese 1 para registrar nueva venta"<<endl
        <<"Ingrese 2 para ver valor de ultima venta"<<endl
        <<"Ingrese 3 para finalizar el dia y ver valor total vendido"<<endl;
        cin>>opcion;
        if (opcion==1){
            int valor;
            cout<<"Ingrese el valor de la venta"<<endl;
            cin>>valor;
            ventas.push(valor);
            cout<<endl;

        }else if(opcion==2){
            if (ventas.empty()==1){
                cout<<"Aun no hay datos"<<endl<<endl;
            }else{
                cout<<ventas.top()<<endl<<endl;
            }

        }else if(opcion==3){

        }else{
            cout<<"Lee bien"<<endl<<endl;
        }
    }

    int aux=ventas.size();
    if (aux==0){
        cout<<"No se registraron ventas"<<endl;
    }else{
        double total=0;
        for (int i = 0; i < aux; ++i) {
            total+=(double)ventas.top();
            ventas.pop();
        }
        cout<<"El valor total de las ventas fue: "<<total<<endl;
    }

    return 0;
}