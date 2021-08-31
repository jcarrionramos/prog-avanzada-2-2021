#include <iostream>
using namespace std;
//Animal
//Avion-Pasajeros

class Animal{
private:
    string nombre,tipo;
    int edad;
public:
    Animal(){}
    string getNombre(){
        return nombre;
    }
    string getTipo(){
        return tipo;
    }
    int getEdad(){
        return edad;
    }
    void setNombre(string nombre){
        this->nombre=nombre;
    }
    void setTipo(string tipo){
        this->tipo=tipo;
    }
    void setEdad(int edad){
        this->edad=edad;
    }
    void imprimir(){
        cout<<"Nombre del animal: "<<nombre<<endl<<"Tipo de animal: "<<tipo<<endl<<"Edad del animal: "<<edad<<endl;
    }
};

int main(){

    string nombre,tipo;
    int edad,n;
    cout<<"Cuantos animales quieres registrar?"<<endl;
    cin>>n;
    Animal *animales[n];

    for (int i = 0; i < n; ++i) {
        animales[i]=new Animal();
        cout<<"Ingrese el nombre del animal"<<endl;
        cin>>nombre;
        cout<<"Ingrese el tipo del animal"<<endl;
        cin>>tipo;
        cout<<"Ingrese la edad del animal"<<endl;
        cin>>edad;
        animales[i]->setNombre(nombre);
        animales[i]->setEdad(edad);
        animales[i]->setTipo(tipo);
        animales[i]->imprimir();
        cout<<endl;
    }

    return 0;
}
