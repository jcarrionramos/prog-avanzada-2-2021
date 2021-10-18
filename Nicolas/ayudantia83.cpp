#include <iostream>
#include <stack>
#include <ctime>
#include <cstdlib>
using namespace std;

class Productos{
private:
    string sku,nombre;
    int precio;
public:
    Productos(string sku,int precio,string nombre){
        this->sku=sku;
        this->precio=precio;
        this->nombre=nombre;
    }
    int getPrecio(){
        return precio;
    }
};

int main(){

    srand(time(NULL));

    stack<Productos*>bodega;

    for (int i = 0; i < 4132; ++i) {
        string nombre= to_string(rand() % 4132 - 20);
        string sku=nombre;
        int precio=rand()%9990;
        Productos *pro=new Productos(sku,precio,nombre);
        bodega.push(pro);
    }
    int aux=bodega.size();
    int total=0;
    for (int i = 0; i < aux; ++i) {
        total+=bodega.top()->getPrecio();
        bodega.pop();
    }
    cout<<total<<endl;

    return 0;
}
