#include <iostream>
using namespace std;

class Pasajero{
private:
    string nombre,rut;
    int maletas;
public:
    Pasajero(){}
    string getNombre(){
        return nombre;
    }
    string getRut(){
        return rut;
    }
    int getMaletas(){
        return maletas;
    }
    void setNombre(string nombre){
        this->nombre=nombre;
    }
    void setRut(string rut){
        this->rut=rut;
    }
    void setMaletas(int maletas){
        this->maletas=maletas;
    }
};

class Avion{
private:
    string modelo;
    Pasajero *pasajeros[5];
public:
    Avion(string modelo){
        this->modelo=modelo;
        for (int i = 0; i < 5; ++i) {
            pasajeros[i]=new Pasajero();
        }
    }
    void setModelo(string modelo){
        this->modelo=modelo;
    }
    string getModelo(){
        return modelo;
    }
    void setPasajeros(string nombre,string rut,int maletas,int indice){
        pasajeros[indice]->setNombre(nombre);
        pasajeros[indice]->setRut(rut);
        pasajeros[indice]->setMaletas(maletas);
        cout<<pasajeros[indice]->getNombre()<<" - "<<pasajeros[indice]->getRut()<<" - "<<pasajeros[indice]->getMaletas()<<endl;
    }
    void getPasajeros(){
        for (int i = 0; i < 5; ++i) {
            cout<<"Nombre pasajero "<<i+1<<": "<<pasajeros[i]->getNombre()<<endl;
            cout<<"Rut pasajero "<<i+1<<": "<<pasajeros[i]->getRut()<<endl;
            cout<<"Cantidad de maletas pasajero "<<i+1<<": "<<pasajeros[i]->getMaletas()<<endl;
        }
        cout<<endl;
    }
};

int main(){

    string modelo,nombre,rut;
    int maletas;
    cout<<"Ingrese el modelo del avion"<<endl;
    cin>>modelo;

    Avion *avioncito = new Avion(modelo);
    for (int i = 0; i < 5; ++i) {
        cout<<"Ingrese el nombre del pasajero "<<i+1<<": "<<endl;
        cin>>nombre;
        cout<<"Ingrese el rut del pasajero "<<i+1<<": "<<endl;
        cin>>rut;
        cout<<"Ingrese la cantidad de maletas del pasajero "<<i+1<<": "<<endl;
        cin>>maletas;
        avioncito->setPasajeros(nombre,rut,maletas,i);
    }
    avioncito->getPasajeros();

    return 0;
}