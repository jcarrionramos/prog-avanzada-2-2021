#include <iostream>
#include <queue>
using namespace std;

int main(){
    int y;
    cin>>y;
    queue<int>numeros;
    if (y<=0){
        cout<<"Ah sos re troll"<<endl;
    }else{
        for(int i=0;i<y;i++){
            int numero;
            cin>>numero;
            numeros.push(numero);
        }
        queue<int>bonito;
        for (int i = 0; i < y; ++i) {
            bonito.push(numeros.front());
            cout<<numeros.front();
            numeros.pop();
        }
        cout<<endl<<"Ingrese el numero a buscar y eliminar"<<endl;
        int n;
        cin>>n;
        queue<int>aux;
        for (int i = 0; i < y; ++i) {
            if (bonito.front()==n){
                bonito.pop();
            }else{
                aux.push(bonito.front());
                bonito.pop();
            }
        }
        // {3,4,5,4,2,4}
        cout<<"El arreglo de numero quedo de tamanio "<<aux.size()<<endl;
        int fin=aux.size();
        for (int i = 0; i < fin; ++i) {
            cout<<aux.front();
            aux.pop();
        }
    }

    return 0;
}