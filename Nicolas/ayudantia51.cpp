#include <iostream>
using namespace std;

class Persona{
private:
    string nombre,apellido,rut;
public:
    Persona(string nombre,string apellido,string rut){
        this->nombre=nombre;
        this->apellido=apellido;
        this->rut=rut;
    }
    void setNombre(string nombre){
        this->nombre=nombre;
    }
    void setApellido(string apellido){
        this->apellido=apellido;
    }
    void setRut(string rut){
        this->rut=rut;
    }
    string getNombre(){
        return nombre;
    }
    string getApellido(){
        return apellido;
    }
    string getRut(){
        return rut;
    }
};

class Cliente: public Persona{
private:
    string comida,forma;
public:
    Cliente(string nombre,string apellido,string rut,string comida,string forma): Persona(nombre,apellido,rut){
        this->comida=comida;
        this->forma=forma;
    }
    string getComida(){
        return comida;
    }
    string getForma(){
        return forma;
    }
    void setComida(string comida){
        this->comida=comida;
    }
    void setForma(string forma){
        this->forma=forma;
    }
};

class Garzon: public Persona{
private:
    int propinas;
public:
    Garzon(string nombre,string apellido, string rut,int propinas): Persona(nombre,apellido,rut){
        this->propinas=propinas;
    }
    void setPropinas(int propinas){
        this->propinas=propinas;
    }
    int getPropinas(){
        return propinas;
    }
};

int main(){
    string nombre,apellido,rut,comida,forma;
    cin>>nombre>>apellido>>rut>>comida>>forma;
    Cliente *cliente1= new Cliente(nombre,apellido,rut,comida,forma);
    cout<<cliente1->getNombre();
}