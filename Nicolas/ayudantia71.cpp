#include <iostream>
using namespace std;

class Animal{
private:
    string nombre;
    int edad;
public:
    Animal(string nombre,int edad){
        this->nombre=nombre;
        this->edad=edad;
    }
    virtual void Caracteristica(){
        cout<<"Sin caracteristica especial, only sad reactions"<<endl;
    }
    string getNombre(){
        return nombre;
    }
};
class Jirafa : public Animal{
private:
    float cuello;
public:
    Jirafa(string nombre,int edad, float cuello): Animal(nombre,edad){
        this->cuello=cuello;
    }
    virtual void Caracteristica(){
        cout<<cuello<<endl;
    }
};
class Mono: public Animal{
private:
    string especie;
public:
    Mono(string nombre, int edad, string especie): Animal(nombre,edad){
        this->especie=especie;
    }
    virtual void Caracteristica(){
        cout<<especie<<endl;
    }
};
class Canario: public Animal{
private:
    string color;
public:
    Canario(string nombre,int edad,string color): Animal(nombre,edad){
        this->color=color;
    }
    virtual void Caracteristica(){
        cout<<color<<endl;
    }
};
int main(){

    string nombre="Benjamin";
    int edad=21;

    Animal *arreglo[4];
    arreglo[0]=new Animal(nombre,edad);
    arreglo[1]=new Jirafa(nombre,edad,25.1);
    arreglo[2]=new Canario(nombre,edad,"Marron");
    arreglo[3]=new Mono(nombre,edad,"Gorila");
    cout<<arreglo[0]->getNombre()<<endl;
    cout<<arreglo[1]->getNombre()<<endl;
    cout<<arreglo[2]->getNombre()<<endl;
    cout<<arreglo[3]->getNombre()<<endl;

    arreglo[0]->Caracteristica();
    arreglo[1]->Caracteristica();
    arreglo[2]->Caracteristica();
    arreglo[3]->Caracteristica();

    return 0;
}
