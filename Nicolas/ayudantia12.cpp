#include <iostream>

using namespace std;

class Producto{
private:
    string nombre;
    float codigo;
    int precio;
public:
    Producto(string nombre, float  codigo, int precio){
        this->nombre=nombre;
        this->codigo=codigo;
        this->precio=precio;
    }
    void setNombre(string nombre){
        this->nombre=nombre;
    }
    void setCodigo(float codigo){
        this->codigo=codigo;
    }
    void setPrecio(int precio){
        this->precio=precio;
    }
    string getNombre(){
        return nombre;
    }
    float getCodigo(){
        return codigo;
    }
    int getPrecio(){
        return precio;
    }
};

int main(){

    string nombre;
    float codigo;
    int precio;

    cin>>nombre>>codigo>>precio;

    Producto *galleta = new Producto(nombre,codigo,precio);

    cout<<galleta->getNombre()<<" "<<galleta->getCodigo()<<" "<<galleta->getPrecio()<<endl;

    cin>>nombre>>codigo>>precio;

    galleta->setNombre(nombre);
    galleta->setCodigo(codigo);
    galleta->setPrecio(precio);

    cout<<galleta->getNombre()<<" "<<galleta->getCodigo()<<" "<<galleta->getPrecio()<<endl;

    return 0;
}
