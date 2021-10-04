#include <iostream>
using namespace std;

class Persona{
private:
    string nombre,rut;
public:
    Persona(string nombre,string rut){
        this->nombre=nombre;
        this->rut=rut;
    }
};
class Trabajador{
private:
    float horas,base;
public:
    Trabajador(float horas,float base){
        this->horas=horas;
        this->base=base;
    }
    virtual float Sueldo(){}
    float getHoras(){
        return horas;
    }
    float getBase(){
        return base;
    }
};
class Ingeniero: public Persona, public  Trabajador{
public:
    Ingeniero(string nombre,string rut,float horas,float base): Persona(nombre,rut), Trabajador(horas,base){}
    float Sueldo(){
        return getBase()+(getHoras()*25);
    }
};

class Contador: public Persona, public  Trabajador{
public:
    Contador(string nombre,string rut,float horas,float base): Persona(nombre,rut), Trabajador(horas,base){}
    float Sueldo(){
        return getBase()+(getHoras()*15);
    }
};

int main(){

    string nombre="Kevin",rut="15451515k";


    Trabajador *arr[2];
    arr[0]=new Ingeniero(nombre,rut,22,1500000);
    arr[1]=new Contador(nombre,rut,45,850000);
    cout<<arr[0]->Sueldo()<<endl;
    cout<<arr[1]->Sueldo()<<endl;

    return 0;
}