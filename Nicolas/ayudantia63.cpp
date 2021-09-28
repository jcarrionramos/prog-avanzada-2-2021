#include <iostream>
using namespace std;
class Animal{
private:
    string nombre;
    int edad;
public:
    Animal(string nombre, int edad){
        this->nombre=nombre;
        this->edad=edad;
    }
     void Hablar(){
        cout<<"Hubo un problema"<<endl;
    }
};
class Perro:public Animal{
private:
    string raza;
public:
    Perro(string raza,string nombre, int edad): Animal(nombre,edad){
        this->raza=raza;
    }
    virtual void Hablar(){
        cout<<"guau guau"<<endl;
    }
};
class Pollo:public Animal{
private:
    string color;
public:
    Pollo(string color,string nombre,int edad): Animal(nombre,edad){
        this->color=color;
    }
    virtual void Hablar(){
        cout<<"pio pio"<<endl;
    }
};
class Gato:public Animal{
private:
    string ojos;
public:
    Gato(string ojos,string nombre,int edad): Animal(nombre,edad){
        this->ojos=ojos;
    }
    virtual void Hablar(){
        cout<<"miau miau"<<endl;
    }
};

int main() {
    Animal *arr[4];
    string nombre = "Karen",ojos="marron",raza="aleman",color="amarillo";
    int edad=5;
    Animal *ani=new Animal(nombre,edad);
    Pollo *poll=new Pollo(color,nombre,edad);
    Perro *hola=new Perro(raza,nombre,edad);
    Gato *gat=new Gato(ojos,nombre,edad);
    arr[0]=ani;
    arr[1]=poll;
    arr[2]=hola;
    arr[3]=gat;
    arr[0]->Hablar();
    arr[1]->Hablar();
    arr[2]->Hablar();
    arr[3]->Hablar();

    return 0;
}